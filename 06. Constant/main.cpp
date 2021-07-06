/* constant are those which value can't be change*/

#include <QCoreApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int age = 44; // can chnage value of variable
    const int id  = 255; // can not change value

    /* id = 12; // create error when try to change value of constant*/



    return a.exec();
}
