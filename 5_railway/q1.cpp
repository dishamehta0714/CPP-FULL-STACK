#include<iostream>
#include<vector>
using namespace std;

class Train
{
private:
    int trainNumber;
    string trainName;
    string source;
    string destination;
    string trainTime;

    static int trainCount;

public:

    Train()
    {
        trainNumber = 0;
        trainName = "not set";
        source = "not set";
        destination = "not set";
        trainTime = "not set";
        trainCount++;
    }

    Train(int num, string name, string src, string dest, string time)
    {
        trainNumber = num;
        trainName = name;
        source = src;
        destination = dest;
        trainTime = time;
        trainCount++;
    }

    ~Train()
    {
        trainCount--;
    }

    void inputTrainDetails()
    {
        cout << "Enter Train Number: ";
        cin >> trainNumber;
        cin.ignore();

        cout << "Enter Train Name: ";
        getline(cin, trainName);

        cout << "Enter Source: ";
        getline(cin, source);

        cout << "Enter Destination: ";
        getline(cin, destination);

        cout << "Enter Train Time: ";
        getline(cin, trainTime);
    }

    void displayTrainDetails()
    {
        cout << "Train Number: " << trainNumber << endl;
        cout << "Train Name: " << trainName << endl;
        cout << "Source: " << source << endl;
        cout << "Destination: " << destination << endl;
        cout << "Train Time: " << trainTime << endl;
       
    }

    int getTrainNumber()
    {
        return trainNumber;
    }

    static int getTrainCount()
    {
        return trainCount;
    }
};

int Train::trainCount = 0;


class RailwaySystem
{
private:
    vector<Train> trains;

public:

    void addTrain()
    {
        Train t;
        t.inputTrainDetails();
        trains.push_back(t);
    }

    void displayAllTrains()
    {
        if(trains.empty())
        {
            cout << "No train records found!" << endl;
            return;
        }

        for(int i = 0; i < trains.size(); i++)
        {
            trains[i].displayTrainDetails();
        }
    }

    void searchTrainByNumber(int number)
    {
      

        for(int i = 0; i < trains.size(); i++)
        {
            if(trains[i].getTrainNumber() == number)
            {
                trains[i].displayTrainDetails();
              
            }
        }

        if(number)
        {
            cout << "Train with number " << number << " not found!" << endl;
        }
    }
};


int main()
{
    RailwaySystem rs;

    int choice, number;

  
    
        cout << "\n--- Railway Reservation System Menu ---\n";
        cout << "1. Add New Train Record\n";
        cout << "2. Display All Train Records\n";
        cout << "3. Search Train by Number\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                rs.addTrain();
                break;

            case 2:
                rs.displayAllTrains();
                break;

            case 3:
                cout << "Enter Train Number to search: ";
                cin >> number;
                rs.searchTrainByNumber(number);
                break;

            case 4:
                cout << "Exiting the system. Goodbye!" << endl;
                break;

            default:
                cout << "Invalid choice!" << endl;
        }

    

    return 0;
}