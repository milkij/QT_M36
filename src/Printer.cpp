//
// Created by Александр Широков on 12.01.2024.
//

#include "Printer.h"
#include <iostream>

using namespace std;

void Printer::printFinished()
{
    cout << "finished" << std::endl;
}

Printer::Printer(QObject *parent)  : QObject(parent) {};