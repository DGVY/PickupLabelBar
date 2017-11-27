#include "ClickLabel.h"

ClickLabel::ClickLabel(QLabel *parent)
    : QLabel(parent)
{
}

ClickLabel::~ClickLabel()
{
}

//--鼠标按下事件
void ClickLabel::mousePressEvent(QMouseEvent *e)
{
    e = e;
    emit mousePress();
}

//--鼠标释放（松开）事件 
void ClickLabel::mouseReleaseEvent(QMouseEvent * e)
{
    e = e;
    emit mouseRelease();
}
