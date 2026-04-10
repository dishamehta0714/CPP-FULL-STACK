#include<iostream>
using namespace std;

class Student
{
private:
    string name;
    int roll_no;
    float gpa;

public:

  
    Student()
    {
        name = "Unknown";
        roll_no = 0;
        gpa = 0.0;
    }


    Student(string n, int r, float g)
    {
        name = n;
        roll_no = r;
        gpa = g;
    }

   
    Student(const Student &s)
    {
        name = s.name;
        roll_no = s.roll_no;
        gpa = s.gpa;
    }


    string getName()
    {
        return name;
    }

    int getRollNo()
    {
        return roll_no;
    }

    float getGPA()
    {
        return gpa;
    }
};

int main()
{

    Student s1("Disha", 101, 8.7);


    Student &ref = s1;

    cout << "Student Details using Reference Variable:" << endl;
    cout << "Name: " << ref.getName() << endl;
    cout << "Roll No: " << ref.getRollNo() << endl;
    cout << "GPA: " << ref.getGPA() << endl;

    cout << endl;

    
    Student s2 = s1;

    cout << "Copied Student Details:" << endl;
    cout << "Name: " << s2.getName() << endl;
    cout << "Roll No: " << s2.getRollNo() << endl;
    cout << "GPA: " << s2.getGPA() << endl;

    return 0;
}