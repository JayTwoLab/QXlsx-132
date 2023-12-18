// main.cpp

#include <iostream>
using namespace std;

#include <QCoreApplication>
#include <QGuiApplication>
#include <QDebug>
#include <QDir>
#include <QVariant>
#include <QtCore>
#include <QtGlobal>
#include <QTextStream>

#include "xlsxdocument.h"

using namespace QXlsx;

int main(int argc, char *argv[])
{
    // QApplication app(argc, argv);
    // QCoreApplication app(argc, argv);
    QGuiApplication app(argc, argv);

    QFile outFile("a.txt");
    outFile.open(QIODevice::WriteOnly | QIODevice::Append);
    QTextStream ts(&outFile);
    ts << app.font().family() << "\r\n";

    // without the follow line, everything works fine
    QXlsx::Document xlsxW;

    return 0;
}

