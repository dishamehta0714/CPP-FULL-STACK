#include<iostream>
using namespace std;

class Hotel
{
private:
    int hotel_id;
    string hotel_name;
    string hotel_type;
    string hotel_rating;
    string hotel_location;
    int hotel_established_year;
    int hotel_staff_quantity;
    int hotel_room_quantity;

public:
    static int HotelCount;

    void setHotelDetails()
    {
        cout << "\nEnter Hotel ID: ";
        cin >> hotel_id;
        cin.ignore();

        cout << "Enter Hotel Name: ";
        getline(cin, hotel_name);

        cout << "Enter Hotel Type (Hotel/Motel): ";
        getline(cin, hotel_type);

        cout << "Enter Hotel Rating (1 Star - 7 Star): ";
        getline(cin, hotel_rating);

        cout << "Enter Hotel Location: ";
        getline(cin, hotel_location);

        cout << "Enter Hotel Established Year: ";
        cin >> hotel_established_year;

        cout << "Enter Hotel Staff Quantity: ";
        cin >> hotel_staff_quantity;

        cout << "Enter Hotel Room Quantity: ";
        cin >> hotel_room_quantity;

        HotelCount++;
    }

    void getHotelDetails()
    {
        cout << "\n Hotel Details " << endl;
        cout << "Hotel ID: " << hotel_id << endl;
        cout << "Hotel Name: " << hotel_name << endl;
        cout << "Hotel Type: " << hotel_type << endl;
        cout << "Hotel Rating: " << hotel_rating << endl;
        cout << "Hotel Location: " << hotel_location << endl;
        cout << "Hotel Established Year: " << hotel_established_year << endl;
        cout << "Hotel Staff Quantity: " << hotel_staff_quantity << endl;
        cout << "Hotel Room Quantity: " << hotel_room_quantity << endl;
    }
};

int Hotel::HotelCount = 0;

int main()
{
    int n;

    cout << "Enter Number of Hotels: ";
    cin >> n;

    Hotel h[n];

    for(int i = 0; i < n; i++)
    {
        cout << "\nEnter Details of Hotel " << i + 1 << endl;
        h[i].setHotelDetails();
    }

    cout << "\n Hotel Records \n";

    for(int i = 0; i < n; i++)
    {
        h[i].getHotelDetails();
    }

    cout << "\nTotal Hotels Entered: " << Hotel::HotelCount << endl;

    return 0;
}