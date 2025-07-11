#include <iostream>

using namespace std;
class book{

string title;
string author;
float price;
float discount;
float finalprice;


public:
void setprice(float p, float d){//I initially set float setprice instead of void
discount = d;
price = p;
}

void setfinalprice(float fp){
finalprice = fp;
}
void setinfo(string a, string t){
author = a;
title = t;
}

float discountprice(){

    if(discount<=0){
            cout<<"INVALID"<<endl;
            return price;}//intially there was no return
    else{finalprice= price  * (100-discount)/100;
return finalprice;//the whole formula for the finalprice was here
}
}

void printinfo(){
cout<<"Author Name: "<<author<<endl;
cout<<"Book title: "<<title<<endl;
cout<<"Regular price: "<<price<<endl;
cout<<"Discount: "<<discount<<"%"<<endl;
cout<<"Discount price: "<<discountprice()<<endl;
cout<<"\n"<<endl;// wrong side of newline
}
};

int main()
{
   book a1;
   a1.setinfo("Aryan", "Quiet musings");
   a1.setprice(200, 3);
   a1.printinfo();

    return 0;
}
