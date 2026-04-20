#include<iostream>
using namespace std;


class Calculattion{

    public:

        void calculate(int x,int y){

            int result = x/y;
            cout<<"division is: "<<result<<endl;
        }

        void calculate(int x,int y,int z){

            int result = x-y-z;
            cout<<"substraction is: "<<result<<endl;
        }

        void calculate(int x,int y,int z,int w){


            int result =x*y*z*w;
            cout<<"multipication is: "<<result<<endl;

        }

        void calculate(int x,int y,int z,int w,int r){

            int result = x+y+z+w+r;
            cout<<"addition is: "<<result<<endl;
        }

};
int main(){

    Calculattion obj;

    obj.calculate(20,10);
    obj.calculate(10,20,30);
    obj.calculate(10,20,30,40);
    obj.calculate(10,20,30,40,50);

    return 0;
}