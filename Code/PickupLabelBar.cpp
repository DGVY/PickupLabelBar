#include "PickupLabelBar.h"
#include <QtWidgets\QVBoxLayout>
#include <QtWidgets\QPushButton>
#include <QtWidgets\QLineEdit>
#include <QtWidgets\QLabel>
#include <QtGui\QPixmap>
#include <QtWidgets\QListWidgetItem>
#include "ClickLabel.h"
#include "PickupLabelHeadWidget.h"
#include "TransformParam.h"
#include "Vec3Param.h"

PickupLabelBar::PickupLabelBar(QListWidgetItem *item, QString const& LabelName, QWidget *parent)
    : QWidget(parent),
    m_PickupCurrent(true),
    m_ItemHideHigh(35),
    m_ItemShowHigh(35*5)
{
    m_Item = item;
    InitWidget(LabelName);

    connect(m_HeadWidget, SIGNAL(myLMousePress()), SLOT(LHeadPress()));
    connect(m_HeadWidget, SIGNAL(myLMouseRelease()), SLOT(LHeadRelease()));
    connect(m_HeadWidget, SIGNAL(myRmousePress()), SLOT(RheadPress()));
}

PickupLabelBar::~PickupLabelBar()
{
}

/************************************************************************\
* 初始化布局
\************************************************************************/
void PickupLabelBar::InitWidget(QString const& labelName)
{
    // HeadWidget
    m_HeadWidget = new PickupLabelHeadWidget(labelName);

    // BodyWidget
    m_BodyWidget = new TransformParam();


    // MainWidget
    m_MainLayout = new QVBoxLayout(this);
    m_MainLayout->addWidget(m_HeadWidget);
    m_MainLayout->addWidget(m_BodyWidget);

    m_Item->setSizeHint(QSize(250, m_ItemShowHigh));
}

/************************************************************************\
* 点击"收起"箭头事件
\************************************************************************/
void PickupLabelBar::LHeadPress(void)
{
    //TODO: 图标变色
}

void PickupLabelBar::LHeadRelease(void)
{
    // 当前为 "展开"
    if (m_PickupCurrent)
    {
        m_HeadWidget->setArrowPng(PickupLabelHeadWidget::mRightArrow);
        // 隐藏 BodyWidget
        //m_BodyWidget->hide();
        m_MainLayout->removeWidget(m_BodyWidget);

        //缩小item宽度
        m_Item->setSizeHint(QSize(250, m_ItemHideHigh));

        m_PickupCurrent = false;
    }
    // 当前为 "收起"
    else
    {
        m_HeadWidget->setArrowPng(PickupLabelHeadWidget::mDownArrow);
        // 显示 BodyWidget
        //m_BodyWidget->show();
        m_MainLayout->addWidget(m_BodyWidget);

        //增加item宽度
        m_Item->setSizeHint(QSize(250, m_ItemShowHigh));

        m_PickupCurrent = true;
    }
}

void PickupLabelBar::RheadPress(void)
{
    //TODO: 弹出菜单
}

