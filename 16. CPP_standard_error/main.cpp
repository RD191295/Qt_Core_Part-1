/* standard error - standard way of outputting error
 */
#include <QCoreApplication>
#include <iostream>

using namespace std;
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    //c++ standard-out
    cout << "Standard out"<< endl;

    //c++ standard out
    cerr << "Standard error";

    return a.exec();
}
