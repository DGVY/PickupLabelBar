#pragma once

#include <QWidget>
class QLineEdit;
class QHBoxLayout;
class QLabel;

class Vec3Param : public QWidget
{
    Q_OBJECT

public:
    Vec3Param(QWidget *parent = nullptr);
    ~Vec3Param();

private:
    QLabel              *m_XLabel;
    QLabel              *m_YLabel;
    QLabel              *m_ZLabel;

    QLineEdit           *m_X;
    QLineEdit           *m_Y;
    QLineEdit           *m_Z;

    QHBoxLayout         *m_Layout;

private:
    void InitWidet(void);
};
