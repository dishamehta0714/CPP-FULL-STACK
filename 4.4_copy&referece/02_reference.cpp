#include<iostream>
using namespace std;

void display(int *num)   
{
    *num = 20;    
}     

int main()
{
    int num = 10;

    cout << "Before function call: " << num << endl;

    display(&num); 
    cout << "After function call: " << num << endl;

    return 0;
}