/*Cout - outputing to the console in c++
 * Use the STD namespace and cout
 */

#include <QCoreApplication>
#include <iostream>
#include <QDebug>

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    cout << "Hello WOrld" <<endl; //c++ way to print output in console

    qInfo() << "Hello WOrld"; //Qt way tp print output in console

    int age = 16;
    cout << age;
    cout << endl;
    cout << flush;


    return a.exec();
}
