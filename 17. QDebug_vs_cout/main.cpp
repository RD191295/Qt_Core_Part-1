/* Qt provides a more organized way to output messages
 */

#include <QCoreApplication>
#include <QtDebug>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int age =0;
    qInfo() << "Enter Your age";
    cin >> age;

    qInfo() << "You are" << age << "Years old";
    qInfo() << "Informatio"; //information message85
    qDebug() << "Debug"; //debug message
    qCritical() << "Critical"; // showing critical message
    qFatal("Test Crash!!!"); // application crash

    return a.exec();
}
