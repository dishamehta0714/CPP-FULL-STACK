#include<iostream>
using namespace std;

class DiamondCompany
{
private:
    int comp_id;
    string comp_name;
    int comp_staff_quantity;
    float comp_revenue;
    int comp_import_raw_diamonds;
    int comp_export_diamonds;
    string comp_ceo;

public:

    DiamondCompany(int id,string name,int staff,float revenue,int import_d,int export_d,string ceo)
    {
        comp_id=id;
        comp_name=name;
        comp_staff_quantity=staff;
        comp_revenue=revenue;
        comp_import_raw_diamonds=import_d;
        comp_export_diamonds=export_d;
        comp_ceo=ceo;
    }

    void display()
    {
        cout<<"\nCompany ID: "<<comp_id<<endl;
        cout<<"Company Name: "<<comp_name<<endl;
        cout<<"Staff Quantity: "<<comp_staff_quantity<<endl;
        cout<<"Revenue per Year: "<<comp_revenue<<endl;
        cout<<"Imported Raw Diamonds: "<<comp_import_raw_diamonds<<endl;
        cout<<"Exported Diamonds: "<<comp_export_diamonds<<endl;
        cout<<"CEO: "<<comp_ceo<<endl;
    }
};

int main()
{
    int n;

    cout<<"Enter number you want to add companies: ";
    cin>>n;


    for(int i=0;i<n;i++)
    {
        int id,staff,import_d,export_d;
        float revenue;
        string name,ceo;

        
        cout << "\n=============Company Details============"<< i+1<<endl;

        cout<<"\nEnter Company ID: ";
        cin>>id;

        cin.ignore();

        cout<<"Enter Company Name: ";
        getline(cin,name);

        cout<<"Enter Staff Quantity: ";
        cin>>staff;

        cout<<"Enter Revenue: ";
        cin>>revenue;

        cout<<"Enter Imported Raw Diamonds: ";
        cin>>import_d;

        cout<<"Enter Exported Diamonds: ";
        cin>>export_d;

        cin.ignore();

        cout<<"Enter CEO Name: ";
        getline(cin,ceo);




        DiamondCompany d(id,name,staff,revenue,import_d,export_d,ceo);
        d.display();
    }

    return 0;
}