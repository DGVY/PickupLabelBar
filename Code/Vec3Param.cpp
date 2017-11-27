#include "Vec3Param.h"
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtGui\QDoubleValidator>

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
    m_Layout = new QHBoxLayout(this);

    m_XLabel = new QLabel("X");
    m_YLabel = new QLabel("Y");
    m_ZLabel = new QLabel("Z");

    m_X = new QLineEdit();
    m_X->setValidator(new QDoubleValidator(this));
    m_Y = new QLineEdit();
    m_Y->setValidator(new QDoubleValidator(this));
    m_Z = new QLineEdit();
    m_Z->setValidator(new QDoubleValidator(this));

    m_Layout->addWidget(m_XLabel);
    m_Layout->addWidget(m_X);
    m_Layout->addWidget(m_YLabel);
    m_Layout->addWidget(m_Y);
    m_Layout->addWidget(m_ZLabel);
    m_Layout->addWidget(m_Z);

    m_Layout->setMargin(0);
}


