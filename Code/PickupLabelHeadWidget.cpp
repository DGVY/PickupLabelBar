#include "PickupLabelHeadWidget.h"
#include <QtWidgets\QVBoxLayout>
#include <QtWidgets\QPushButton>
#include <QtWidgets\QLineEdit>
#include <QtWidgets\QLabel>
#include <QtGui\QPixmap>
#include <QtWidgets\QListWidgetItem>
#include <QtGui\QMouseEvent>
#include <QtWidgets\QCheckBox>

PickupLabelHeadWidget::PickupLabelHeadWidget(QString const& labelName, bool chooseLabel, QWidget *parent)
    : QWidget(parent),
    m_PickupRightArrowPath("./Resource/right_arrow.png"),
    m_PickupDownArrowPath("./Resource/down_arrow.png"),
    m_PickupCurrent(nullptr),
    m_LablePicPath("./Resource/csharp1.png")
{
    InitWidget(labelName, chooseLabel);
}

PickupLabelHeadWidget::~PickupLabelHeadWidget()
{
}

/************************************************************************\
* 初始化布局
\************************************************************************/
void PickupLabelHeadWidget::InitWidget(QString const & labelName, bool chooseLabel)
{
    m_HeadLayout = new QHBoxLayout(this);

    m_PickupArrow = new QLabel();
    m_PickupPng = new QPixmap();
    setArrowPng(mDownArrow);
    m_PickupArrow->setFixedSize(m_PickupPng->width(), m_PickupPng->height());
    m_HeadLayout->addWidget(m_PickupArrow,1);

    m_LabelICO = new QLabel();
    m_LabelPic = new QPixmap(m_LablePicPath);
    m_LabelICO->setPixmap(*m_LabelPic);
    m_LabelICO->setFixedSize(m_LabelPic->width(), m_LabelPic->height());
    m_HeadLayout->addWidget(m_LabelICO, 1);

    if (chooseLabel)
    {
        m_LabelName = new QLabel(labelName);
    }
    else
    {
        m_LabelName = new QCheckBox(labelName);
    }
    m_HeadLayout->addWidget(m_LabelName,4, Qt::AlignLeft | Qt::AlignVCenter);

    setFixedHeight(m_LabelPic->height());

    m_HeadLayout->setMargin(0);
    m_HeadLayout->setSpacing(5);
}

/************************************************************************\
* 设置箭头图片
\************************************************************************/
void PickupLabelHeadWidget::setArrowPng(enum arrowCurrent a)
{
    if (a == mRightArrow)
    {
        m_PickupPng->load(m_PickupRightArrowPath);
    }
    else if(a == mDownArrow)
    {
        m_PickupPng->load(m_PickupDownArrowPath);
    }
    else
    {
        return;
    }

    m_PickupArrow->setPixmap(*m_PickupPng);
}

//void PickupLabelHeadWidget::setPickupCurrent(bool *pickupCurrent)
//{
//    m_PickupCurrent = pickupCurrent;
//}


void PickupLabelHeadWidget::mousePressEvent(QMouseEvent * e)
{
    switch (e->button())
    {
    case Qt::LeftButton:
        emit myLMousePress();
        break;
    case Qt::RightButton:
        emit myRmousePress();
    default:
        break;
    }
}

void PickupLabelHeadWidget::mouseReleaseEvent(QMouseEvent * e)
{
    if (e->button() == Qt::LeftButton)
    {
        emit myLMouseRelease();
    }
}
