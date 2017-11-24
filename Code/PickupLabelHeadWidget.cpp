#include "PickupLabelHeadWidget.h"
#include <QtWidgets\QVBoxLayout>
#include <QtWidgets\QPushButton>
#include <QtWidgets\QLineEdit>
#include <QtWidgets\QLabel>
#include <QtGui\QPixmap>
#include <QtWidgets\QListWidgetItem>
#include <QtGui\QMouseEvent>

PickupLabelHeadWidget::PickupLabelHeadWidget(QString const& labelName, QWidget *parent)
    : QWidget(parent),
    m_PickupRightArrowPath("./Resource/right_arrow.png"),
    m_PickupDownArrowPath("./Resource/down_arrow.png"),
    m_PickupCurrent(true)
{
    InitWidget(labelName);
}

PickupLabelHeadWidget::~PickupLabelHeadWidget()
{
}

/************************************************************************\
* 初始化布局
\************************************************************************/
void PickupLabelHeadWidget::InitWidget(QString const & labelName)
{
    m_HeadLayout = new QHBoxLayout(this);
    m_PickupArrow = new QLabel();
    m_PickupPng = new QPixmap();
    setArrowPng(mDownArrow);
    m_PickupArrow->resize(m_PickupPng->width(), m_PickupPng->height());
    m_LabelName = new QLabel(labelName);
    m_HeadLayout->addWidget(m_PickupArrow);
    m_HeadLayout->addWidget(m_LabelName);
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
