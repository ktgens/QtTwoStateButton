#pragma once

#include <QApplication>
#include <QToolButton>

class StateButton: public QToolButton
{
    public:
        StateButton(QWidget *parent = nullptr);

        void setOnIcon(const QIcon &icon);
        void setOffIcon(const QIcon &icon);
    private:
        void updateButtonIcon(bool checked);

        QIcon m_onIcon;
        QIcon m_offIcon;
};