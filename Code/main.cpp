#if _MSC_VER >= 1600
#pragma execution_character_set("utf-8")
#endif

#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.setWindowTitle(QWidget::tr("ListWidget≤‚ ‘"));
    w.resize(300, 300);
    w.show();

    return a.exec();
}
