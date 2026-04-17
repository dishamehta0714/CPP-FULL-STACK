
#include<iostream>
using namespace std;

class x{
protected:
    int a,b,c;


};

class y: public x{

public:
    void setData(){
        cout<<"Enter Three Numbers:"<<endl;
        cin>>a>>b>>c;;
    }

    void getData(){

        int sum = (a*a*a)+(b*b*b)+(c*c*c);
        cout<<"Sum Of All Cubes: "<<sum<<endl;

    }

};

int main(){

    y obj;

    obj.setData();
    obj.getData();

      
    return 0;
}