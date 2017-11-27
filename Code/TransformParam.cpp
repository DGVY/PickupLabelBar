#include "TransformParam.h"
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include "Vec3Param.h"

TransformParam::TransformParam(QWidget *parent)
    : QWidget(parent)
{
    InitWidget();
}

TransformParam::~TransformParam()
{
}

void TransformParam::InitWidget(void)
{
    m_MainLayout = new QGridLayout(this);
    
    m_PositionLabel = new QLabel("Position");
    m_RotationLabel = new QLabel("Rotation");
    m_ScaleLabel = new QLabel("Scale");

    m_PositionVec3 = new Vec3Param();
    m_RotationVec3 = new Vec3Param();
    m_ScaleVec3 = new Vec3Param();

    m_Blank = new QWidget();
    m_Blank->setFixedWidth(16);

    m_MainLayout->addWidget(m_Blank, 0, 0, 3, 1);

    m_MainLayout->addWidget(m_PositionLabel, 0, 1);
    m_MainLayout->addWidget(m_PositionVec3, 0, 2);

    m_MainLayout->addWidget(m_RotationLabel, 1, 1);
    m_MainLayout->addWidget(m_RotationVec3, 1, 2);

    m_MainLayout->addWidget(m_ScaleLabel, 2, 1);
    m_MainLayout->addWidget(m_ScaleVec3, 2, 2);

    m_MainLayout->setColumnStretch(0, 1);
    m_MainLayout->setColumnStretch(1, 2);
    m_MainLayout->setColumnStretch(2, 3);

    // 设置水平间距
    m_MainLayout->setHorizontalSpacing(1);
    // 设置垂直间距
    m_MainLayout->setVerticalSpacing(1);
    // 设置外间距
    m_MainLayout->setMargin(0);


}
