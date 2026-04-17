

#include <iostream>
using namespace std;

class A
{
public:
    int a, b;
    A(int x, int y)
    {
        a = x;
        b = y;
    }
};

class B : public A
{
public:
    int c;
    B(int x, int y, int z) : A(x, y)
    {
        c = z;
    }
};

class C
{
public:
    int d;
    C(int w)
    {
        d = w;
    }
};

class D : public B, public C
{
public:
    D(int x, int y, int z, int w) : B(x, y, z), C(w) {}

    void sum()
    {
        cout << "Sum = " << a + b + c + d;
    }
};

int main()
{
    D obj(10, 20, 30, 40);
    obj.sum();
}