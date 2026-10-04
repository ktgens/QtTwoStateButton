#include <QApplication>
#include <QPushButton>
#include <QToolBar>
#include <QMainWindow>
#include <QStyle>
#include "StateButton.h"

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    QMainWindow mainWindow;
    mainWindow.resize(300,400);

    QToolBar *toolbar = mainWindow.addToolBar("Main toolbar");

    StateButton *stateButton = new StateButton(&mainWindow);
    
    //иконки с tabler.io/icons
    QIcon onIcon(PROJECT_ICONS_DIR "lock.png");
    QIcon offIcon(PROJECT_ICONS_DIR "lock_open.png");

    stateButton->setOnIcon(onIcon);
    stateButton->setOffIcon(offIcon);

    toolbar->addWidget(stateButton);

    mainWindow.show();

    return app.exec();
}