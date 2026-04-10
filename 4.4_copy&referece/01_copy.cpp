#include<iostream>
using namespace std;

class Student
{
private:
    int id;
    string name;

public:

    Student(int i, string n)
    {
        id = i;
        name = n;
    }

  
    Student(const Student &s)
    {
        id = s.id;
        name = s.name;
    }

    void display()
    {
        cout << "Student ID: " << id << endl;
        cout << "Student Name: " << name << endl;
    }
};

int main()
{
    Student s1(101, "Parth");

    Student s2 = s1;   
    cout << "Student 1:" << endl;
    s1.display();

    cout << "\nStudent 2:" << endl;
    s2.display();

    return 0;
}