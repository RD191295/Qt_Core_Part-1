/* Arithmetic operator -perform math operation like addition an detc
 */

#include <QCoreApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int age; //no assigment

    qInfo() << age;

    age = 24; // assignment
    qInfo() <<age;

    age++; //increment
    qInfo() <<age;

    age--; //decrement
    qInfo() <<age;

    int older = age * 5; //multipaction
    qInfo() << older;

    older = older / 5 ; // division
    qInfo() << older;


    return a.exec();
}
