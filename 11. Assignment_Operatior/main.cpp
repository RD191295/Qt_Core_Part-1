/*
 * Assignment operator is used to assign value to variable
 */

#include <QCoreApplication>
#include <QtDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int age = 5; // "=" is assignment operator
    qInfo() << "age:" << age;

    age += 5 ; //  ret = ret +5
    qInfo() <<"age=age+5:"<< age;

    age /= 5 ; //  ret = ret +5
    qInfo() <<"age=age/5:"<< age;

    age -= 15 ; //  ret = ret +5
    qInfo() <<"age=age-5:"<< age;

    age *= 5 ; //  ret = ret +5
    qInfo() <<"age=age*5:"<< age;

    return a.exec();
}
