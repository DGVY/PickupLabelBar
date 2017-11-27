#pragma once

#include <QWidget>
class QLineEdit;
class QHBoxLayout;

class Vec3Param : public QWidget
{
    Q_OBJECT

public:
    Vec3Param(QWidget *parent);
    ~Vec3Param();

private:
    QLineEdit           *m_X;
    QLineEdit           *m_Y;
    QLineEdit           *m_Z;

    QHBoxLayout         *m_Layout;

private:
    void InitWidet(void);
};
