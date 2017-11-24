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
    : QWidget(parent)
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
    

    // MainWidget
    m_MainLayout = new QVBoxLayout(this);
    m_MainLayout->addWidget(m_HeadWidget);
    m_MainLayout->addWidget(m_BodyWidget);

    m_Item->setSizeHint(QSize(250, 100));
}

void PickupLabelBar::LHeadRelease(void)
{
}

void PickupLabelBar::RheadPress(void)
{
}

/************************************************************************\
* ���"����"��ͷ�¼�
\************************************************************************/
void PickupLabelBar::LHeadPress(void)
{
    //// ��ǰΪ "չ��"
    //if (m_PickupCurrent)
    //{
    //    setArrowPng(m_PickupRightArrowPath);
    //    //TODO: ���� BodyWidget

    //    //��Сitem���
    //    m_Item->setSizeHint(QSize(250, 35));

    //    m_PickupCurrent = false;
    //}
    //// ��ǰΪ "����"
    //else
    //{
    //    setArrowPng(m_PickupDownArrowPath);
    //    //TODO: ��ʾ BodyWidget

    //    //����item���
    //    m_Item->setSizeHint(QSize(250, 100));

    //    m_PickupCurrent = true;
    //}

}
