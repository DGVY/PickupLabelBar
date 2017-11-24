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
    //--��갴���¼�
    void mousePressEvent(QMouseEvent *e);

    //--����ͷţ��ɿ����¼� 
    void mouseReleaseEvent(QMouseEvent *e);
};
