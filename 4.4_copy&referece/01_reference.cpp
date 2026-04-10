#include <iostream>
using namespace std;

int main()
{

    int x = 10;
    int &y = x;

    cout << "before value: " << endl;
    cout << "value of x: " << x << endl;

    cout << "value of y: " << y << endl;

    y = 24;

    cout << "atfter changng value :" << endl;
    cout << "change value pf x: " << x << endl;
    cout << "change value of y: " << y << endl;

    return 0;
}