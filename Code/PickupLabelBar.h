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
    /*---���岼��---*/
    QVBoxLayout         *m_MainLayout;

    /*---��ǩͷ---*/
    PickupLabelHeadWidget *m_HeadWidget;

    /*---��ǩ��---*/
    // ��ǩ��Widget
    QWidget             *m_BodyWidget;
    // ����
    QVBoxLayout         *m_BodyLayout;

    QListWidgetItem     *m_Item;


    // ���������

private:
    void InitWidget(QString const& labelName);

public slots :
    void LHeadPress(void);
    void LHeadRelease(void);
    void RheadPress(void);
};

