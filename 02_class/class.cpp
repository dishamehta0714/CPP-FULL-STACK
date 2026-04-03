#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    string course;
    string grade;

    void StudentName(string n, string c, string g)
    {
        name = n;
        course = c;
        grade = g;
    }

    void StudentDetailInfo()
    {
        cout << "Student Name: " << name << endl;
        cout << "Course Name: " << course << endl;
        cout << "Grade: " << grade << endl;
    }
};

int main()
{
    Student s1;

    s1.StudentName("Alice", "FSD", "A");
    s1.StudentDetailInfo();

    return 0;
}