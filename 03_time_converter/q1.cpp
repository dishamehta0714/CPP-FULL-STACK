#include <iostream>
using namespace std;

class TimeConverter
{
private:
    int hours, minutes, seconds, totalSeconds;

public:
    void setTimeData()
    {
        hours = totalSeconds / 3600;
        minutes = (totalSeconds % 3600) / 60;
        seconds = totalSeconds % 60;

        cout << "HH:MM:SS : ";
        cout << hours << ":" << minutes << ":" << seconds << endl;
    }
    void getSeconds()
    {

        cout << "Enter total seconds: ";
        cin >> totalSeconds;
    }
};

int main()
{

    TimeConverter t;

    t.getSeconds();
    t.setTimeData();

    return 0;
}