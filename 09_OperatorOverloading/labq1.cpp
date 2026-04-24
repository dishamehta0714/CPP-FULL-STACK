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

    bool operator>(Number obj)
    {
        if (num > obj.num)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{

    Number n1(31);

    Number n2(14);

    if (n1 > n2)
    {
        cout << "n1 is greater than n2" << endl;
    }
    else
    {
        cout << "n2 greater than n1" << endl;
    }
}