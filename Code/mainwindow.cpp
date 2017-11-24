#include "mainwindow.h"
#include "PickupLabelBar.h"
#include <QtWidgets\QListWidgetItem>
#include <QtWidgets\QListWidget>
#include <QtWidgets\QVBoxLayout>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    centerWindow = new QWidget(this);
    m_mainLayout = new QVBoxLayout(centerWindow);

    m_listWidget = new QListWidget();
    item1 = new QListWidgetItem(m_listWidget);
    item2 = new QListWidgetItem(m_listWidget);

    lab1 = new PickupLabelBar(item1, "AAA");
    lab2 = new PickupLabelBar(item2, "BBB");

    m_listWidget->setItemWidget(item1, lab1);
    m_listWidget->setItemWidget(item2, lab2);
    m_mainLayout->addWidget(m_listWidget);
    m_listWidget->show();
    this->setCentralWidget(centerWindow);
}

MainWindow::~MainWindow()
{

}
