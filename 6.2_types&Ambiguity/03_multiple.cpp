#include<iostream>
using namespace std;

class Parent1{
public:
    void show1(){
        cout<<"This is Parent 1 class"<<endl;
    }
};

class Parent2{
public:
    void show2(){
        cout<<"This is Parent 2 class"<<endl;
    }
};

class Child : public Parent1, public Parent2{
public:
    void display(){
        cout<<"This is Child class"<<endl;
    }
};

int main(){
    Child obj;
    
    obj.show1();  
    obj.show2();   
    obj.display(); 
}