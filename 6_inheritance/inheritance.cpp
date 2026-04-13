#include <iostream>
using namespace std;

class Employee
{
private:
    string name;

public:
    void setName(string n)
    {
        name = n;
    }

    void EmployeeName()
    {
        cout << "Employee Name: " << name << endl;
    }
};

class Manager : public Employee
{
protected:
    int salary;

public:
    void setSalary(int s)
    {
        salary = s;
    }

    void showSalary()
    {
        cout << "Salary: " << salary << endl;
    }
};

class Owner
{
private:
    int changeSalary;

public:
    void setChangeSalary(int c)
    {
        changeSalary = c;
    }

    void ChangeSalary()
    {
        cout << "Changed Salary: " << changeSalary << endl;
    }
};

int main()
{
    Employee e1;
    e1.setName("Disha");
    e1.EmployeeName();

    Manager m1;
    m1.setName("Parth");
    m1.setSalary(2000);
    m1.EmployeeName();
    m1.showSalary();

    Owner obj;
    obj.setChangeSalary(500);
    obj.ChangeSalary();

    return 0;
}