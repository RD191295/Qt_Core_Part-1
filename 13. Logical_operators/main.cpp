/* Logical Operators - want to make Logical comparisions like  and,or,not etc.
 */
#include <QCoreApplication>
#include <QtDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    bool var1 = true;
    bool var2 = false;

    qInfo() << "Logical And:" << (var1&&var2);
    qInfo() << "Logical or:" << (var1||var2);
    qInfo() << "Logical not:" << (!var2);

    int x =10;

    qInfo() << "x between 5 and 20:" << (x>5 && x< 20);
    qInfo() << "x less than 10 , less than 5:" << (x<10||x<5);
    qInfo() << "x not equal to 10:" << (!(x!=10));

    qInfo() <<"complex:" << !((x>11 && x<20) || (x==10)) ;

    return a.exec();
}
