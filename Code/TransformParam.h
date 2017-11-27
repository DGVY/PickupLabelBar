#pragma once

#include <QWidget>
class Vec3Param;
class QGridLayout;
class QHBoxLayout;
class QLabel;
class QLineEdit;

class TransformParam : public QWidget
{
    Q_OBJECT

public:
    TransformParam(QWidget *parent = nullptr);
    ~TransformParam();

private:
    QGridLayout         *m_MainLayout;

    QLabel              *m_PositionLabel;
    QLabel              *m_RotationLabel;
    QLabel              *m_ScaleLabel;

    Vec3Param           *m_PositionVec3;
    Vec3Param           *m_RotationVec3;
    Vec3Param           *m_ScaleVec3;

    QWidget             *m_Blank;

private:
    void InitWidget(void);

};
