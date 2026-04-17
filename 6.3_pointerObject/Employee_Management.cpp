#include <iostream>
using namespace std;

class Employee
{

protected:
    int emp_id;
    string emp_name;
    int emp_age;
    int emp_salary;

public:
    Employee(int id, string name, int age, int salary)
    {

        emp_id = id;
        emp_name = name;
        emp_age = age;
        emp_salary = salary;
    }

    virtual void display()
    {

        cout << "emp id" << emp_id << endl;
        cout << "emp name" << emp_name << endl;
        cout << "emp age" << emp_age << endl;
        cout << "emp salary" << emp_salary << endl;
    }

    ~Employee()
    {
    }
};

class FullTimeEmployee : public Employee
{

private:
    float bonus;

public:
    FullTimeEmployee(int id, string name, int age, int salary, int bonus) : Employee(id, name, age, salary)
    {

        this->bonus = bonus;
    }
    void display()
    {
    Employee:display();

        cout << "employee bonus" << bonus << endl;
    }
};

class PartTimeEmployee : public Employee
{

private:
    int hours_worked;

public:
    PartTimeEmployee(int id, string name, int age, int salary, int hours) : Employee(id, name, age, salary)
    {

        int hours_worked = hours;
    }
    void display()
    {

    Employee:display();
        cout << "employee work hours" << endl;
    }
};

int main()
{

    Employee *emp[100];
    int count=0;
    int choice; 
    do{

        cout<<"Employee Management System"<<endl;

        cout<<"\n1. Add full time employee"<<endl;
        cout<<"\n2. Add part time employee"<<endl;
        cout<<"\n3. Display employees"<<endl;
        cout<<"\n4. Delete employee"<<endl;
        cout<<"\n5. Exit"<<endl;
        cout<<"\n Enter Your Choice: "<<endl;
        cin>>choice;

          if(choice == 1)
        {
            int type;
            cout << "1 Full Time\n2 Part Time\nEnter type: ";
            cin >> type;

           
            if(type == 1)
            {
                int id, age, salary;
                string name;
                float bonus;

                cout<<"Enter ID: ";
                cin>>id;
                cout<<"Enter Name: ";
                cin>>name;
                cout<<"Enter Age: ";
                cin>>age;
                cout<<"Enter Salary: ";
                cin>>salary;
                cout<<"Enter Bonus: ";
                cin>>bonus;

                emp[count] = new FullTimeEmployee(id,name,age,salary,bonus);
                count++;
            }
            else if(type == 2)
            {
                int id, age, salary, hours;
                string name;

                cout<<"Enter ID: ";
                cin>>id;
                cout<<"Enter Name: ";
                cin>>name;
                cout<<"Enter Age: ";
                cin>>age;
                cout<<"Enter Salary: ";
                cin>>salary;
                cout<<"Enter Hours Worked: ";
                cin>>hours;

                emp[count] = new PartTimeEmployee(id,name,age,salary,hours);
                count++;
            }
        }
        else if(choice == 2)
        {
            for(int i=0;i<count;i++)
            {
                cout<<"\nEmployee "<<i+1<<endl;
                emp[i]->display();
            }
        }

    }

     while(choice != 5);
    

    return 0;
}