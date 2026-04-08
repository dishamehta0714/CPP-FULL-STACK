#include <iostream>
using namespace std;

class Emoloyee
{

private:
    int emp_id;
    string emp_name;

public:
    Emoloyee(int id, string name)
    {

        emp_id = id;
        emp_name = name;
    }

    void display()
    {
        cout << "employee id: " << emp_id << endl;

        cout << "emoloyee  name: " << emp_name << endl;
    }
};

int main()
{

    Emoloyee e1(101,"alice");

    e1.display();



        return 0;
}