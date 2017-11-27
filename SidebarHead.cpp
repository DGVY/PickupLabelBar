#include "SidebarHead.h"
#include <QtWidgets/QPushButton>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QLabel>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>

SidebarHead::SidebarHead(QString const& objectName, QWidget *parent)
    : QWidget(parent)
{
    InitWidget(objectName);
}

SidebarHead::~SidebarHead()
{
}

void SidebarHead::InitWidget(QString const& objectName)
{
    m_EnableCB = new QCheckBox();
    m_ObjectName = new QLineEdit(objectName);

    m_Tag = new QLabel("Tag");
    m_TagSelect = new QComboBox();

    m_Layer = new QLabel("Layer");
    m_LayerSelect = new QComboBox();

    m_Model = new QLabel("Model");
    m_Select = new QPushButton("Select");
    m_Revert = new QPushButton("Revert");
    m_Open = new QPushButton("Open");

    m_ModelLayout = new QHBoxLayout();
    m_ModelLayout->addWidget(m_Select);
    m_ModelLayout->addWidget(m_Revert);
    m_ModelLayout->addWidget(m_Open);
    m_ModelLayout->setSpacing(0);

    m_MainLayout = new QGridLayout(this);

    m_MainLayout->addWidget(m_EnableCB, 0, 1, 1, 1, Qt::AlignRight | Qt::AlignVCenter);
    m_MainLayout->addWidget(m_ObjectName, 0, 2, 1, 5);

    m_MainLayout->addWidget(m_Tag, 1, 1, 1, 1, Qt::AlignRight | Qt::AlignVCenter);
    m_MainLayout->addWidget(m_TagSelect, 1, 2, 1, 2);
    m_MainLayout->addWidget(m_Layer, 1, 4, 1, 1, Qt::AlignRight | Qt::AlignVCenter);
    m_MainLayout->addWidget(m_LayerSelect, 1, 5, 1, 2);

    m_MainLayout->addWidget(m_Model, 2, 0, 1, 2, Qt::AlignRight | Qt::AlignVCenter);
    m_MainLayout->addLayout(m_ModelLayout, 2, 2, 1, 5);

    m_MainLayout->setColumnStretch(0, 1);
    m_MainLayout->setColumnStretch(1, 1);
    m_MainLayout->setColumnStretch(2, 1);
    m_MainLayout->setColumnStretch(3, 1);
    m_MainLayout->setColumnStretch(4, 1);
    m_MainLayout->setColumnStretch(5, 1);
    m_MainLayout->setColumnStretch(6, 1);
    
}
