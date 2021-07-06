/* Data Types defines what a variable or constant represent
 *
 *
 *
*/

#include <QCoreApplication>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int age = 24 ; // age is variable with INT datatype
    double height = 6.02; // height is variable with FLOAT datatype

    qInfo()<< "Age :" << age;
    qInfo()<< "Height :" << height;

    age = 24.80;
    qInfo()<< "Age :" << age;   // Because age is int

    signed int dogs = -1;  // signed datatype
    qInfo()<< "dogs :" << dogs;


    /* find size of data type*/
    qInfo()<<"Size of dogs variable"<< sizeof (dogs); // Finde Size of dogs variable
    qInfo()<<"Size of Age variable"<< sizeof (age); // Finde Size of dogs variable
    qInfo()<<"Size of Height variable"<< sizeof (height); // Finde Size of dogs variable

    return a.exec();
}
