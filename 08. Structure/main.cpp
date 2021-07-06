/* structure use to represent data structures
 *
 *  keyword :- struct
 *  sturct represent user-defined data-type avilable
 */

#include <QCoreApplication>
#include <QDebug>

enum colors {black,red,green,blue};

//Precursor to classes
struct product
{
  int weight;
  double value;
  colors color;
};

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    product laptop; // No assignment ( we have a variable but did not assign any value)

    qInfo()<< "Size :" << sizeof (product); //size of struct product

    laptop.color = colors::red;
    laptop.value = 540.98;
    laptop.weight = 3;


    qInfo()<< "value of struct :" << laptop.color;
    qInfo()<< "value of struct :" << laptop.value;
    qInfo()<< "value of struct :" << laptop.weight;

    return a.exec();
}
