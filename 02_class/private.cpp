#include <iostream>
using namespace std;

class Student
{
private:
    int marks;
    string name;
    string grade;

public:
    void setMarks(string n, int m,string g)
    {
        name = n;
        marks = m;
        grade = g;
    }

    void display()
    {
        cout << " Student Name  : " << name << endl;
        cout << " Student Marks : " << marks << endl;
        cout << " Student Grade : " << grade << endl;

    }
};

int main()
{
    Student s1;

    s1.setMarks("aryan", 90,"A");
    s1.display();

    Student s2;

    s2.setMarks("deep", 85,"B");
    s2.display();

    Student s3;

    s3.setMarks("shiv", 78,"C");
    s3.display();

    return 0;
}