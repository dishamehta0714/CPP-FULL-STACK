#include <iostream>
using namespace std;

int main()
{
    int start, end;
    cout << "Enter Starting Year : ";
    cin >> start;

    cout << "Enter Ending Year : ";
    cin >> end;

    int count = 0;
    int leapYear[100];

    for(int year = start; year <= end; year++)
    {
        if((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
        {
            leapYear[count] = year;
            count++;
        }
    }

    cout << "Leap Years between " << start << " and " << end << " : ";

    for(int i = 0; i < count; i++)
    {
        cout << leapYear[i] << " ";
    }

    return 0;
}