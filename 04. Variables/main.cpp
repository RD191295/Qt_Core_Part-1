/*
 * variables is something that will change
 * type name = value
 * Different type of datatype like bool,int,float are there
 */

#include <QCoreApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    // variables are something that will change
    bool Lightswitch = true; // Lightswith is bool variable

    qInfo()<< "Value of Bool variable : " << Lightswitch;

    return a.exec();
}
