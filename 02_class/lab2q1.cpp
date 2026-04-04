#include <iostream>
using namespace std;

class Employee
{
private:
    int emp_id;
    string emp_name;
    int emp_age;
    string emp_role;
    double emp_salary;
    string emp_city;
    int emp_experience;
    string emp_company_name;

public:
    void setData()
    {
        cout << "Enter Employee ID: ";
        cin >> emp_id;

        cout << "Enter Employee Name: ";
        cin >> emp_name;

        cout << "Enter Employee Age: ";
        cin >> emp_age;

        cout << "Enter Employee Role: ";
        cin >> emp_role;

        cout << "Enter Employee Salary: ";
        cin >> emp_salary;

        cout << "Enter Employee City: ";
        cin >> emp_city;

        cout << "Enter Employee Experience (years): ";
        cin >> emp_experience;

        cout << "Enter Company Name: ";
        cin >> emp_company_name;
    }

    void displayData()
    {
        cout << "\nEmployee ID: " << emp_id << endl;
        cout << "Employee Name: " << emp_name << endl;
        cout << "Employee Age: " << emp_age << endl;
        cout << "Employee Role: " << emp_role << endl;
        cout << "Employee Salary: " << emp_salary << endl;
        cout << "Employee City: " << emp_city << endl;
        cout << "Employee Experience: " << emp_experience << " years" << endl;
        cout << "Company Name: " << emp_company_name << endl;
    }
};

int main()
{
    Employee e[5];


    for(int i=0;i<5;i++)
    {
        cout << "\nEnter details of Employee :" << i+1 << endl;
        e[i].setData();
    }

    cout << "\n\nEmployee Records\n";

    for(int i=0;i<5;i++)
    {
        cout << "\nEmployee " << i+1 << " Details:";
        e[i].displayData();
    }

    return 0;
}