#include<iostream>
using namespace std;


class Car{

    private:
        string car_color="black";
      string car_name="verna";

      public:
        Car(){

            cout<< "car name is "<<car_name<<" and color is "<<car_color<<endl;
        }
};
int main(){

    Car c1;

    return  0;
}