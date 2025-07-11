#include <iostream>

using namespace std;

class temperature{
private:
    float celcius=NULL;
    float farenheight=NULL;
    float kelvin=NULL;

public:
 void setCelcius( float c){
 celcius=c;
 }
  void setFarenheight( float f){
farenheight=f;
 }
  void setKelvin( float k){
 kelvin=k;
 }
    float celciusToKelvin(){
        return kelvin = celcius+ 273.15;
    }
 float celciusToFarenheight(){
     return   farenheight =((celcius*9)/5)+32;
    }
float KelvinToCelcius(){
        return celcius = kelvin -  273.15;
    }
 float KelvinToFarenheight(){
     return   farenheight =((kelvin-273.15)*9)/5+32;
    }
float farenheightToKelvin(){
return kelvin = ((farenheight-32)*5)/9+273.15 ;
}

float farenheightToCelcius(){
return celcius = ((farenheight-32)*5)/9;
}
void printConversion(){
if(celcius!=NULL){

    cout<<"Celsius: "<<celcius<<endl;
    cout<<"Celsius to Kelvin: "<<celciusToKelvin()<<endl;
    cout<<"Celsius to Farenheight: "<<celciusToFarenheight()<<endl;
    }
    else if(kelvin!=NULL){

    cout<<"Kelvin: "<<kelvin<<endl;
    cout<<"Kelvin to celsius: "<<KelvinToCelcius()<<endl;
    cout<<"Kelvin to Farenheight: "<<KelvinToFarenheight()<<endl;
    }
    else if (farenheight!=NULL){
        cout<<"Farenheight: "<<farenheight<<endl;
    cout<<"Farenheight to celsius: "<<farenheightToCelcius()<<endl;
    cout<<"Farenheight to Kelvin: "<<farenheightToKelvin()<<endl;

    }
cout<<"\n"<<endl;
    }
};

int main()
{
   temperature c1,c2,c3;
   c1.setCelcius(20);
   c1.printConversion();
c2.setFarenheight(43);
   c2.printConversion();
   c3.setKelvin(56);
   c3.printConversion();
    return 0;
}
