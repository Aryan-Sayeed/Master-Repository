#include <iostream>

using namespace std;
/*Basic Bank Account with Interest
Concept:

Class BankAccount with balance and interest rate.

Method addInterest() adds calculated interest to balance.

Method printBalance() shows updated balance.

✅ What you practice:

Using percentage formulas inside methods.

One method changes the state (balance) of the object.

*/

class BankAccount{
float balance;
float interest;

public:
    void setBalance(float b){
    balance = b;}
    void setInterest(float i){
    interest = i;
    }

void addInterest(){

    float oldbalance;
    oldbalance= balance;
balance = balance * (100+interest)/100;
cout<<"Balance Updated"<<endl;
 cout<<"Old balance: "<<oldbalance<<endl;
 cout<<"New Balance: "<<balance<<endl;
 cout<<"\n"<<endl;
}

void printbalance(){
cout<<"Current Balance: "<<balance<<endl;
cout<<"interest Rate: "<<interest<<"%"<<endl;
cout<<"\n"<<endl;

}
};
int main()
{
 BankAccount B1;
 B1.setBalance(5000);
 B1.setInterest(50);
 B1.printbalance();
 B1.addInterest();
 B1.addInterest();
 B1.printbalance();
    return 0;
}
