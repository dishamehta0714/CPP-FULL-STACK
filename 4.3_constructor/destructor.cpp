#include <iostream>
using namespace std;

class student
{

private:
    int stu_roll_no=18;
    string stu_name="Disha";

public:
    student() //constructor
    {
        cout << "student name is " << stu_name << "and student roll no is " << stu_roll_no << endl;
    }

    ~student() // destructor
    {

        cout <<"destructor called "<<endl;
    }
};
int main()
{

    student s1;

    return 0;
}
