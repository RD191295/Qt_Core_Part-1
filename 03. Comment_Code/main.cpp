#include <QCoreApplication>
#include <QtDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    /*THis is multi
    * line comment
     */

    qInfo()<<"Hello World!"; // Single Line Comment

    return a.exec();
}
