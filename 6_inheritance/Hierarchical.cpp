#include<iostream>
using namespace std;

class A{

public:
    string empName = "Disha";

    void empDisplay(){
        cout<<"Employee name is "<<empName<<endl;
    }
};

class B : public A{
public:

    int empId = 101;

    void IdDisplay(){
        cout<<"Employee Id "<<empId<<endl;
    }
};

class C : public A, public B{

public:
    int salary = 50000;

    void DisplaySalary(){
        cout<<"Employee Salary Is "<<salary<<endl;
    }
};

int main(){

    C obj;

    obj.B::empDisplay();   
    obj.IdDisplay();
    obj.DisplaySalary();

    return 0;
}