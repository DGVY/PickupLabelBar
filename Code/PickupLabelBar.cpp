#include "PickupLabelBar.h"
#include <QtWidgets\QVBoxLayout>
#include <QtWidgets\QPushButton>
#include <QtWidgets\QLineEdit>
#include <QtWidgets\QLabel>
#include <QtGui\QPixmap>
#include <QtWidgets\QListWidgetItem>
#include "ClickLabel.h"
#include "PickupLabelHeadWidget.h"

PickupLabelBar::PickupLabelBar(QListWidgetItem *item, QString const& LabelName, QWidget *parent)
    : QWidget(parent),
    m_PickupCurrent(true),
    m_ItemHideHigh(35),
    m_ItemShowHigh(35*4)
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
* ��ʼ������
\************************************************************************/
void PickupLabelBar::InitWidget(QString const& labelName)
{
    // HeadWidget
    m_HeadWidget = new PickupLabelHeadWidget(labelName);

    // BodyWidget
    m_BodyWidget = new QWidget();
    m_BodyLayout = new QVBoxLayout(m_BodyWidget);
    aBtn1 = new QPushButton("abcdefg");
    aBtn2 = new QPushButton("1234567");
    m_BodyLayout->addWidget(aBtn1);
    m_BodyLayout->addWidget(aBtn2);
    

    // MainWidget
    m_MainLayout = new QVBoxLayout(this);
    m_MainLayout->addWidget(m_HeadWidget);
    m_MainLayout->addWidget(m_BodyWidget);

    m_Item->setSizeHint(QSize(250, m_ItemShowHigh));
}

/************************************************************************\
* ���"����"��ͷ�¼�
\************************************************************************/
void PickupLabelBar::LHeadPress(void)
{

}

void PickupLabelBar::LHeadRelease(void)
{
    // ��ǰΪ "չ��"
    if (m_PickupCurrent)
    {
        m_HeadWidget->setArrowPng(PickupLabelHeadWidget::mRightArrow);
        //TODO: ���� BodyWidget
        //m_BodyWidget->hide();
        m_MainLayout->removeWidget(m_BodyWidget);

        //��Сitem���
        m_Item->setSizeHint(QSize(250, m_ItemHideHigh));

        m_PickupCurrent = false;
    }
    // ��ǰΪ "����"
    else
    {
        m_HeadWidget->setArrowPng(PickupLabelHeadWidget::mDownArrow);
        //TODO: ��ʾ BodyWidget
        //m_BodyWidget->show();
        m_MainLayout->addWidget(m_BodyWidget);

        //����item���
        m_Item->setSizeHint(QSize(250, m_ItemShowHigh));

        m_PickupCurrent = true;
    }
}

void PickupLabelBar::RheadPress(void)
{
    //TODO: �����˵�
}

