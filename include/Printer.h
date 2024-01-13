#pragma once
#include <QApplication>
#include <QObject>

class Printer : public QObject
{
    Q_OBJECT;

public slots:
    void printFinished();
public:
    explicit Printer(QObject *parent = nullptr);
};



