#include <QApplication>
#include <QPushButton>
#include "StateButton.h"

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    QPushButton button("smth");

    button.resize(300, 100);
    button.show();

    return app.exec();
}