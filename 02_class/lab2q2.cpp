#include <iostream>
using namespace std;

class Car
{
private:
    int car_id;
    string car_company_name;
    string car_color;
    string car_model;
    int car_release_year;

public:
    void setData()
    {
        cout << "Enter Car ID: ";
        cin >> car_id;

        cout << "Enter Company Name: ";
        cin >> car_company_name;

        cout << "Enter Car Color: ";
        cin >> car_color;

        cout << "Enter Car Model: ";
        cin >> car_model;

        cout << "Enter Release Year: ";
        cin >> car_release_year;
    }

    void displayData()
    {
        cout << "\nCar ID: " << car_id << endl;
        cout << "Company Name: " << car_company_name << endl;
        cout << "Car Color: " << car_color << endl;
        cout << "Car Model: " << car_model << endl;
        cout << "Release Year: " << car_release_year << endl;
    }
};

int main()
{
    Car c[4];

    // cout << "Enter Car Details\n";

    for(int i=0;i<4;i++)
    {
        cout << "\nEnter details of Car " << i+1 << endl;
        c[i].setData();
    }

    cout << "\n\nCar Records\n";

    for(int i=0;i<4;i++)
    {
        cout << "\nCar " << i+1 << " Details:";
        c[i].displayData();
    }

    return 0;
}