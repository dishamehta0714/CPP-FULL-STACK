#include <iostream>
using namespace std;

class Number
{
public:
    int num;

    Number(int n)
    {
        num = n;
    };
};

int main()
{

    Number n1(14);
    Number n2(31);

    // cout << "total " << n1 + n2 << endl;
    return 0;
}