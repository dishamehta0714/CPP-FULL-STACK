#include <iostream>
using namespace std;

class Cricket
{
public:
    virtual void getTotalOvers()
    {

        cout << "intialize total over has zero " << endl;
    }
};

class T20Match : public Cricket
{
public:
    void getTotalOvers()
    {

        cout << "T20 match has 20 overs " << endl;
    }
};

class TestMatch : public Cricket
{

public:
    void getTotalOvers()
    {
        cout << "Test Match has 90 overs " << endl;
    }
};
int main()
{

    Cricket *match;

    T20Match t20;

    match = &t20;
    match->getTotalOvers();

    TestMatch test;

    match = &test;
    match->getTotalOvers();

    return 0;
}