#include <iostream>

using namespace std;
class Product{
string name;
double price;
double discount;

public:
    Product(string n, double p){
    name = n;
    price = p;

    }
void setDiscount(double d){
    if (d<0){
        cout<<"Discount cannot be less than 0"<<endl;
    }
    else{discount = d;}

}
//getx() -> returns value
//setx() -> changes value
 string getName(){
 return name;
 }
 double getPrice(){
 return price;
 }
 double getDiscount(){
 return discount;
 }
 double getDiscountedPrice(){
 double discountprice;
 discountprice = price *(100-discount)/100;
 return discountprice;
 }
 void printDetails(){
 cout<<"Name: "<<name<<endl;
 cout<<"Original Price: "<<price<<endl;
 cout<<"Discount%: "<<discount<<endl;
 cout<<"Discounted Price: "<<getDiscountedPrice()<<endl;
 }

};

int main()
{
Product p1("Clothes", 223);
p1.setDiscount(20);
p1.printDetails();
    return 0;
}
