#include <iostream>
using namespace std;

class Student
{
private:
    int stu_id, stu_age;
    string stu_name, stu_course, stu_city, stu_email, stu_college;

public:
    void setData()
    {
        cout << "Enter Student ID: ";
        cin >> stu_id;

        cin.ignore(); 

        cout << "Enter Student Name: ";
        getline(cin, stu_name);

        cout << "Enter Student Age: ";
        cin >> stu_age;

        cin.ignore();

        cout << "Enter Student Course: ";
        getline(cin, stu_course);

        cout << "Enter Student City: ";
        getline(cin, stu_city);

        cout << "Enter Student Email: ";
        getline(cin, stu_email);

        cout << "Enter Student College: ";
        getline(cin, stu_college);
    }

    void getData()
    {
        cout << "Student ID: " << stu_id << endl;
        cout << "Student Name: " << stu_name << endl;
        cout << "Student Age: " << stu_age << endl;
        cout << "Student Course: " << stu_course << endl;
        cout << "Student City: " << stu_city << endl;
        cout << "Student Email: " << stu_email << endl;
        cout << "Student College: " << stu_college << endl;
    }
};

int main()
{
    Student s[5];

    for (int i = 0; i < 5; i++)
    {
        cout << "\nEnter Student Data " << i + 1 << endl;
        s[i].setData();
    }

    cout << "\nStudent Records\n";

    for (int i = 0; i < 5; i++)
    {
        cout << "\nStudent " << i + 1 << " Data:\n";
        s[i].getData();
    }

    return 0;
}