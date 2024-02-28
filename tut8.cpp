#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

    int a = 56;
    cout << "the value of a was " << a << endl;
    float b = 7.67;
    cout << "the value of b is " << b << endl;
    // constants

    const int a = 45;
    cout << "the value of a was " << a << endl;
    a = 6.87;
    cout << "the value of b is " << a << endl;
    // the value of a has not changed because it's const.

    // manipulators

    int a = 67;
    float b = 6.78;
    char c = 'u';
    // with "<<endl" manipulator
    cout << "the value of a is " << a << endl;
    cout << "the value of b is " << b << endl;
    cout << "the value of c is " << c << endl;
    // with "<<setw" manipulators
    cout << "the value of a is " << setw(6) << a << endl;
    cout << "the value of b is " << setw(6) << b << endl;
    cout << "the value of c is " << setw(6) << c << endl;

    // operators precedence
    int a = 67, b = 67;
    a = ((((a * 5) + b) - 67) + 75);
    cout << setw(5) << a << endl;
    return 0;
}
