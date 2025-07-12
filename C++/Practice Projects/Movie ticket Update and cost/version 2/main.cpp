#include <iostream>
using namespace std;
//Version 2
class movieticket{
//movie name, seat number, price.

string name;
string seatNo;
int price;

public:
    void setName(string n){
    name= n;
    }
     void setSeat(string s){
    seatNo = s;
    }
    void setPrice(int p){
    price = p;
    }
//Method printTicket() that shows all details.
    void printTicket(){
    cout<<"Movie Name: "<<name<<endl;
    cout<<"Seat Name: "<<seatNo<<endl;
    cout<<"Price: "<<price<<endl;
    cout<<"\n"<<endl;
    }
   // Method upgradeSeat() — changes seat number and price
   void upgradeSeat(string ns, int np ){
   setSeat(ns);
   setPrice(np);
    printTicket();// Achieves the same thing with less code

   }
};



int main()
{
movieticket m1;
m1.setName("Rio");
m1.setSeat("A5 row 20");
m1.setPrice(20);
m1.printTicket();
m1.upgradeSeat("C5 row 2",5);

    return 0;
}
