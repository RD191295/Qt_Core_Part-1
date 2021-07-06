/*
 * Enums - need to represent a set of data with number
 * it can be done with enum keyword
 *
 */

#include <QCoreApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

//    int red =0;
//    int green = 1;
//    int blue = 2;
//    qInfo() << "Color" << green;

    enum Color {red,green,blue}; // crete enum
    Color mycolor = Color::blue;
    qInfo() << "Color" << mycolor;

    enum testcolor{yellow = 5 , white,gray}; // crete enum with asign value
    testcolor color = testcolor::gray;
    qInfo() << "Color" << color;

    enum test{pink , black =  5 ,viloate}; // crete enum with asign value to 1 member only
    test Color = test::viloate; // enum is integer constant.. one we asigned value we can't reassign value.
    qInfo() << "Color" << Color;


    return a.exec();
}
