#include<iostream>
using namespace std;

class A{
public:
    void show(){
        cout<<"Believe in yourself, you are stronger than you think."<<endl;
    }
};

class B{
public:
    void show(){
        cout<<"Never give up, great things take time."<<endl;
    }
};

class C : public A, public B{

    public:
        void show(){
            cout<<"Dream big and work hard to achieve it."<<endl;
        }
};

int main(){

    C obj;

    obj.A::show();   
    obj.B::show();  
    obj.C::show();
    return 0;
}