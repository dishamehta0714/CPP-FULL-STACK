#include<iostream>
using namespace std;

class Bank{

private:
    int bankBalance;

public:


    void setBankBalance(int bankBalance){
        this->bankBalance = bankBalance;
    }

    
    void getBankBalance(){
        cout << "Main Bank Balance: " << bankBalance << endl;
        cout << " Bank Bakance: " << 2000 << endl;
    }

};

int main(){

    Bank b1;

    b1.setBankBalance(8000);   
    b1.getBankBalance();       

    return 0;
}