#include <iostream>
using namespace std;

class Customer
{
private:
    int cust_id, cust_age, cust_simcard_validity;
    string cust_name, cust_city, cust_mobile_number, cust_telecom_brand_name;

public:
    void setData()
    {
        cout << "Enter Customer ID: ";
        cin >> cust_id;

        cin.ignore();

        cout << "Enter Customer Name: ";
        getline(cin, cust_name);

        cout << "Enter Customer Age: ";
        cin >> cust_age;

        cin.ignore();

        cout << "Enter Customer City: ";
        getline(cin, cust_city);

        cout << "Enter Mobile Number: ";
        getline(cin, cust_mobile_number);

        cout << "Enter SIM Card Validity (Years): ";
        cin >> cust_simcard_validity;

        cin.ignore();

        cout << "Enter Telecom Brand Name: ";
        getline(cin, cust_telecom_brand_name);
    }

    void getData()
    {
        cout << "Customer ID: " << cust_id << endl;
        cout << "Customer Name: " << cust_name << endl;
        cout << "Customer Age: " << cust_age << endl;
        cout << "Customer City: " << cust_city << endl;
        cout << "Mobile Number: " << cust_mobile_number << endl;
        cout << "SIM Card Validity: " << cust_simcard_validity << " Years" << endl;
        cout << "Telecom Brand: " << cust_telecom_brand_name << endl;
    }
};

int main()
{
    Customer c[5];

    for (int i = 0; i < 5; i++)
    {
        cout << "\nEnter Customer Data " << i + 1 << endl;
        c[i].setData();
    }

    cout << "\nCustomer Records\n";

    for (int i = 0; i < 5; i++)
    {
        cout << "\nCustomer " << i + 1 << " Data:\n";
        c[i].getData();
    }

    return 0;
}