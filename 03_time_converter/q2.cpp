#include <iostream>
using namespace std;

class TimeConverter
{
private:
    int hours, minutes, seconds;

public:
    void setTimeData()
    {
        int totalSeconds = (hours * 3600) + (minutes * 60) + seconds;

       

        cout << "total seconds: " << totalSeconds << endl;
    }
    void getSeconds()
    {

        cout << "Enter houres: ";
        cin >> hours;

        cout << "Enter minutes: ";
        cin >> minutes;

        cout << "Enter seconds: ";
        cin >> seconds;
    }
};

int main()
{

    TimeConverter t;

    t.getSeconds();
    t.setTimeData();

    return 0;
}