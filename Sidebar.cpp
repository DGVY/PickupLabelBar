#include "Sidebar.h"
#include "SidebarHead.h"
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QPushButton>

Sidebar::Sidebar(QWidget *parent)
    : QWidget(parent)
{
    m_MainLayout = new QVBoxLayout(this);
    m_SidebarHead = new SidebarHead("SAKLDFJ");

    m_MainLayout->addWidget(m_SidebarHead);

    m_A = new QPushButton("adfasd");
    m_MainLayout->addWidget(m_A);
}

Sidebar::~Sidebar()
{
}
