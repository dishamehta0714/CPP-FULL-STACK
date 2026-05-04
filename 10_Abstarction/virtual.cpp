#include <iostream>
using namespace std;


class Payment
{
public:
    virtual void pay()
    {
        cout << "Payment " << endl;
    }; 
};


class UPI : public Payment
{
public:
    void pay()
    {
        cout << "Payment done using UPI" << endl;
    }
};

int main()
{
    Payment *p;
    UPI u;

    
   
    p = &u;
    p->pay();

    return 0;
}