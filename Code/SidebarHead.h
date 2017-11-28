#pragma once

#include <QWidget>

class QGridLayout;
class QHBoxLayout;
class QLineEdit;
class QPushButton;
class QLabel;
class QCheckBox;
class QComboBox;

class SidebarHead : public QWidget
{
    Q_OBJECT

public:
    SidebarHead(QString const& objectName = "", QWidget *parent = nullptr);
    ~SidebarHead();

private:
    QGridLayout         *m_MainLayout;

    QCheckBox           *m_EnableCB;
    QLineEdit           *m_ObjectName;

    QLabel              *m_Tag;
    QComboBox           *m_TagSelect;

    QLabel              *m_Layer;
    QComboBox           *m_LayerSelect;

    QLabel              *m_Model;
    QHBoxLayout         *m_ModelLayout;
    QPushButton         *m_Select;
    QPushButton         *m_Revert;
    QPushButton         *m_Open;

private:
    void InitWidget(QString const& objectName);

};
