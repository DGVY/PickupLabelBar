#pragma once

#include <QWidget>
class SidebarHead;
class QVBoxLayout;
class QPushButton;

class Sidebar : public QWidget
{
    Q_OBJECT

public:
    Sidebar(QWidget *parent = nullptr);
    ~Sidebar();
private:
    QVBoxLayout         *m_MainLayout;
    SidebarHead         *m_SidebarHead;
    QPushButton         *m_A;
};
