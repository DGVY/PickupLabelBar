#include "ClickLabel.h"

ClickLabel::ClickLabel(QLabel *parent)
    : QLabel(parent)
{
}

ClickLabel::~ClickLabel()
{
}

//--��갴���¼�
void ClickLabel::mousePressEvent(QMouseEvent *e)
{
    e = e;
    emit mousePress();
}

//--����ͷţ��ɿ����¼� 
void ClickLabel::mouseReleaseEvent(QMouseEvent * e)
{
    e = e;
    emit mouseRelease();
}
