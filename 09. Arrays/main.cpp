/*
 Arrays store Multiple values inside one variable of same datatype
 */

#include <QCoreApplication>
#include <QDebug>

// other way to create array
#include <array>
using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    // Zero Based Index Array
    int ages[4] = {25,48,13,20};

    qInfo() << ages[0];
    qInfo() << ages[1];
    qInfo() << ages[2];
    qInfo() << ages[3];

    // change value of array element index -2

    ages[2] = 5;
    qInfo()<<ages[2];

    // print ages (address)

    qInfo() <<ages;

    // second way array decration
    array<int,5> cars = {1,2,3,4,5};
    cars[2] = 55;
    qInfo() << cars[0];
    qInfo() << cars[1];
    qInfo() << cars[2];
    qInfo() << cars[3];
    qInfo() << cars[4];

    // total member  of array
    qInfo()<<"Total No of Elements in array:"<<cars.size();

    // size of array
    qInfo()<<"Size of array is :" <<sizeof (cars);

    // access last element
    qInfo() << "Last:" << cars[cars.size()-1];

    return a.exec();
}
