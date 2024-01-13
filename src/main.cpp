#include <QApplication>
#include <QObject>
#include <QTimer>
#include "Printer.h"

using namespace std;


int main(int argc, char *argv[]) {
    QApplication a(argc, argv);

    QTimer myTimer;
    Printer myPrinter;
    QObject::connect(&myTimer,&QTimer::timeout,&myPrinter, &Printer::printFinished);
    myTimer.start(2000);
    a.exec();

}
