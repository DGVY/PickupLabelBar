#pragma once

#include <QtWidgets\QWidget>
class QVBoxLayout;
class QHBoxLayout;
class QPushButton;
class QLineEdit;
class QLabel;
class ClickLabel;
class QPixmap;
class QListWidgetItem;
class PickupLabelHeadWidget;

class PickupLabelBar : public QWidget
{
    Q_OBJECT

public:
    PickupLabelBar(QListWidgetItem *item, QString const& LabelName, QWidget *parent = nullptr);
    ~PickupLabelBar();

private:
    /*---主体布局---*/
    QVBoxLayout         *m_MainLayout;
    // 当前标签页状态(展开:true or 收起:false)，默认展开
    bool                m_PickupCurrent;
    
    QListWidgetItem     *m_Item;
    int const           m_ItemShowHigh;
    int                 m_ItemHideHigh;


    /*---标签头---*/
    PickupLabelHeadWidget *m_HeadWidget;

    /*---标签体---*/
    // 标签体Widget
    QWidget             *m_BodyWidget;
    // 布局
    QVBoxLayout         *m_BodyLayout;



    // 测试用组件
    QPushButton         *aBtn1;
    QPushButton         *aBtn2;

private:
    void InitWidget(QString const& labelName);

public slots :
    void LHeadPress(void);
    void LHeadRelease(void);
    void RheadPress(void);
};


