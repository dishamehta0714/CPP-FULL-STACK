#include<iostream>
using namespace std;

class Student
{
private:
    int gr_id;
    string name;
    string course;
    int completed_year;

public:
    static int StudentCount;

    void setStudentDetails()
    {
        cout << "\nEnter GR ID: ";
        cin >> gr_id;
        cin.ignore();

        cout << "Enter Student Name: ";
        getline(cin, name);

        cout << "Enter Course: ";
        getline(cin, course);

        cout << "Enter Completed Year: ";
        cin >> completed_year;

        StudentCount++;
    }

    void getStudentDetails()
    {
        cout << "\nStudent Details" << endl;
        cout << "GR ID: " << gr_id << endl;
        cout << "Name: " << name << endl;
        cout << "Course: " << course << endl;
        cout << "Completed Year: " << completed_year << endl;
    }
};

int Student::StudentCount = 0;

int main()
{
    int n;

    cout << "Enter Number of Students: ";
    cin >> n;

    Student s[n];

    for(int i = 0; i < n; i++)
    {
        cout << "\nEnter Details of Student " << i + 1 << endl;
        s[i].setStudentDetails();
    }

    cout << "\nStudent Records\n";

    for(int i = 0; i < n; i++)
    {
        s[i].getStudentDetails();
    }

    cout << "\nTotal Students Entered: " << Student::StudentCount << endl;

    return 0;
}