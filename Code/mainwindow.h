#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
class PickupLabelBar;
class QListWidget;
class QWidget;
class QListWidgetItem;
class QVBoxLayout;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    QWidget *centerWindow;
    QVBoxLayout *m_mainLayout;
    QVBoxLayout *m_itemLayout;
    QListWidget *m_listWidget;
    PickupLabelBar *lab1;
    PickupLabelBar *lab2;
    QListWidgetItem     *item1;
    QListWidgetItem     *item2;

};

#endif // MAINWINDOW_H
