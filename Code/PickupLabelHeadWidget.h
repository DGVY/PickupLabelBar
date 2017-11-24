#pragma once

#include <QWidget>
class QVBoxLayout;
class QHBoxLayout;
class QPushButton;
class QLineEdit;
class QLabel;
class ClickLabel;
class QPixmap;

class PickupLabelHeadWidget : public QWidget
{
    Q_OBJECT

public:
    PickupLabelHeadWidget(
        QString const& labelName = "NewLabel", 
        QWidget *parent = nullptr);
    ~PickupLabelHeadWidget();

private:
    // ����
    QHBoxLayout         *m_HeadLayout;
    // "����" ��ͷ
    QLabel              *m_PickupArrow;
    QPixmap             *m_PickupPng;
    const QString       m_PickupRightArrowPath;
    const QString       m_PickupDownArrowPath;
    // ��ǰ��ǩҳ״̬(չ��:true or ����:false)��Ĭ��չ��
    bool                m_PickupCurrent;
    // ��ǩ��
    QLabel              *m_LabelName;

public:
    enum arrowCurrent
    {
        mRightArrow,
        mDownArrow
    };
    void setArrowPng(enum arrowCurrent a);

private:
    void InitWidget(QString const& labelName);

signals:
    void myLMousePress(void);
    void myLMouseRelease(void);
    void myRmousePress(void);

protected:
    //--��갴���¼�
    void mousePressEvent(QMouseEvent *e);
    //--����ƶ��¼�
    //void mouseMoveEvent(QMouseEvent *e);
    //--����ͷţ��ɿ����¼�
    void mouseReleaseEvent(QMouseEvent *e);
    //--���˫���¼�
    //void mouseDoubleClickEvent(QMouseEvent *e);
};
