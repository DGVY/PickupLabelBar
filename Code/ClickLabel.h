#pragma once

#include <QtWidgets/QLabel>

class ClickLabel : public QLabel
{
    Q_OBJECT

public:
    ClickLabel(QLabel *parent = nullptr);
    ~ClickLabel();

signals:
    void mousePress();
    void mouseRelease();
protected:
    //--鼠标按下事件
    void mousePressEvent(QMouseEvent *e);

    //--鼠标释放（松开）事件 
    void mouseReleaseEvent(QMouseEvent *e);
};
