/* comparison operators is used to compare two variable
 */

#include <QCoreApplication>
#include <QtDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int x = 10;
    int y = 10;

    qInfo() <<"x ==y"<< (x==y) ;
    qInfo() <<"x !=y"<< (x!=y) ;
    qInfo() <<"x <y"<< (x<y) ;
    qInfo() <<"x >y"<< (x>y) ;
    qInfo() <<"x <=y"<< (x<=y) ;
    qInfo() <<"x >=y"<< (x>=y) ;

    return a.exec();
}
