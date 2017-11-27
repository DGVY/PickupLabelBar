#pragma once

#include <QWidget>
class QVBoxLayout;
class QHBoxLayout;
class QPushButton;
class QLineEdit;
class QLabel;
class ClickLabel;
class QPixmap;
class QCheckBox;

class PickupLabelHeadWidget : public QWidget
{
    Q_OBJECT

public:
    PickupLabelHeadWidget(
        QString const& labelName = "NewLabel", 
        bool chooseLabel = false,
        QWidget *parent = nullptr);
    ~PickupLabelHeadWidget();

private:
    // 布局
    QHBoxLayout         *m_HeadLayout;

    // "收起" 箭头
    QLabel              *m_PickupArrow;
    QPixmap             *m_PickupPng;
    const QString       m_PickupRightArrowPath;
    const QString       m_PickupDownArrowPath;
    // 当前标签页状态(展开:true or 收起:false)，默认展开
    bool                *m_PickupCurrent;

    // 标签图标
    QLabel              *m_LabelICO;
    QPixmap             *m_LabelPic;
    const QString       m_LablePicPath;

    // 标签名
    QWidget             *m_LabelName;

public:
    enum arrowCurrent
    {
        mRightArrow,
        mDownArrow
    };
    void setArrowPng(enum arrowCurrent a);
    //void setPickupCurrent(bool *pickupCurrent);

private:
    void InitWidget(QString const& labelName, bool chooseLabel);

signals:
    void myLMousePress(void);
    void myLMouseRelease(void);
    void myRmousePress(void);

protected:
    //--鼠标按下事件
    void mousePressEvent(QMouseEvent *e);
    //--鼠标移动事件
    //void mouseMoveEvent(QMouseEvent *e);
    //--鼠标释放（松开）事件
    void mouseReleaseEvent(QMouseEvent *e);
    //--鼠标双击事件
    //void mouseDoubleClickEvent(QMouseEvent *e);
};
