#include <QApplication>
#include <QToolButton>
#include <string.h>

class StateButton: public QToolButton
{
    public:
        StateButton(QWidget *parent = nullptr);
        void SetOnIcon(std::string path);
        void SetOffIcon(std::string path);
    private:
        QIcon m_onIcon;
        QIcon m_offIcom;
};