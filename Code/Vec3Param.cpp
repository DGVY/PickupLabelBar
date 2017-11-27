#include "Vec3Param.h"
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QHBoxLayout>

Vec3Param::Vec3Param(QWidget *parent)
    : QWidget(parent)
{
    InitWidet();
}

Vec3Param::~Vec3Param()
{
}

void Vec3Param::InitWidet(void)
{
    m_X = new QLineEdit("X");
    m_Y = new QLineEdit("Y");
    m_Z = new QLineEdit("Z");

    m_Layout = new QHBoxLayout(this);
    m_Layout->addWidget(m_X, 1);
    m_Layout->addWidget(m_Y, 1);
    m_Layout->addWidget(m_Z, 1);
}


