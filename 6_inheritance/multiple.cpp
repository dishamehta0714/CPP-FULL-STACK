#include<iostream>
using namespace std;

class Employee
{
public:
    void empInfo()
    {
        cout<<"Employee working in company"<<endl;
    }
};

class Salary
{
public:
    void showSalary()
    {
        cout<<"Salary: 30000"<<endl;
    }
};

class Manager : public Employee, public Salary
{
public:
    void manage()
    {
        cout<<"Manager manages employees"<<endl;
    }
};

int main()
{
    Manager m;

    m.empInfo();
    m.showSalary();
    m.manage();
}