#include <QCoreApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    qInfo()<< "Hello Word"; /*Print Hello World in console */
    return a.exec();
}
