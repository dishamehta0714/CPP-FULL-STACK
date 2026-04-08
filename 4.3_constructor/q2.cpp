#include<iostream>
using namespace std;

class Cafe
{
private:
    int cafe_id;
    string cafe_name;
    string cafe_type;
    string cafe_rating;
    string cafe_location;
    int cafe_establish_year;
    int cafe_staff_quantity;

public:

    Cafe()
    {
        cout<<"\nEnter Cafe ID: ";
        cin>>cafe_id;

        cin.ignore();

        cout<<"Enter Cafe Name: ";
        getline(cin,cafe_name);

        cout<<"Enter Cafe Type: ";
        getline(cin,cafe_type);

        cout<<"Enter Cafe Rating: ";
        getline(cin,cafe_rating);

        cout<<"Enter Cafe Location: ";
        getline(cin,cafe_location);

        cout<<"Enter Establish Year: ";
        cin>>cafe_establish_year;

        cout<<"Enter Staff Quantity: ";
        cin>>cafe_staff_quantity;
    }

    void display()
    {
        cout<<"\nCafe ID: "<<cafe_id<<endl;
        cout<<"Cafe Name: "<<cafe_name<<endl;
        cout<<"Cafe Type: "<<cafe_type<<endl;
        cout<<"Cafe Rating: "<<cafe_rating<<endl;
        cout<<"Cafe Location: "<<cafe_location<<endl;
        cout<<"Establish Year: "<<cafe_establish_year<<endl;
        cout<<"Staff Quantity: "<<cafe_staff_quantity<<endl;
    }
};

int main()
{
    int n;

    cout<<"Enter number of cafes: ";
    cin>>n;

    Cafe c[n];

    for(int i=0;i<n;i++)
    {
        cout<<"\nCafe "<<i+1<<" Details:";
        c[i].display();
    }

    return 0;
}