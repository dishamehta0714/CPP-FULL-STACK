#include <iostream>
using namespace std;

class P
{

protected:
    float temperature;
};

class Q : public P
{
protected:
    float fahrenheit;

public:
    void toFahrenheit()
    {

        cout << "enter temprature celcius: " << endl;
        cin >> temperature;

        fahrenheit = (temperature * 9 / 5) + 32;
        cout << "fahrenheit= " << fahrenheit << endl;
    }
};

    class R : public Q
    {

    public:
        void toKelvin(){
            float kelvin = temperature + 273.15;
            cout << "kelvin = " << kelvin << endl;
        }
    };
int main()
{

    R obj;

    obj.toFahrenheit();
    obj.toKelvin();

    

    return 0;
}