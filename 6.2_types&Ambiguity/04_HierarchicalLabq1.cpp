#include<iostream>
using namespace std;

class RBI
{
protected:
    int rate;

public:
    RBI()
    {
        rate = 5;
    }

    int getRate()
    {
        return rate;
    }
};

class SBI : public RBI
{
public:
    SBI()
    {
        rate = 6;
    }
};

class BOB : public RBI
{
public:
    BOB()
    {
        rate = 7;
    }
};

class ICICI : public RBI
{
public:
    ICICI()
    {
        rate = 8;
    }
};

int main()
{
    RBI r;
    SBI s;
    BOB b;
    ICICI i;

    cout<<"RBI Interest Rate Is: "<<r.getRate()<<endl;
    cout<<"SBI Interest Rate Is: "<<s.getRate()<<endl;
    cout<<"BOB Interest Rate Is: "<<b.getRate()<<endl;
    cout<<"ICICI Interest Rate Is: "<<i.getRate()<<endl;

    return 0;
}