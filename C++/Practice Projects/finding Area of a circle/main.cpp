#include <iostream>

using namespace std;
class Circle{

float radius=NULL;
float circumference=NULL;
float diameter=NULL;

public:
const float PI = 3.14;
    void setRadius(float r){
        radius = r;
    }
    void setCircumference(float c){
        circumference = c;
    }
    void setDiameter(float d){
        diameter = d;
    }
    float Area;
    float findArea(){
        if (radius!=NULL){
         Area = PI * radius*radius;
    return Area;
    }
    else if(diameter!= NULL){

        Area = PI * (diameter/2)*(diameter/2);
        return Area;
    }
    else if(circumference!=NULL){
        Area = circumference/2 *circumference/(2*PI);
    return Area;}

    else {
        cout<<"NO input is given"<<endl;
    }


    }
void printinfo(){
    if (radius!=NULL){cout <<"Radius: "<<radius<<" unit"<<endl;
cout<<"Area: "<<findArea()<<" unit^2"<<endl;

cout<<"\n"<<endl;}

else if(diameter!=NULL){
    cout <<"Diameter: "<<diameter<<" unit"<<endl;
cout<<"Area: "<<findArea()<<" unit^2"<<endl;
cout<<"\n"<<endl;
}
else if(circumference!=NULL){
    cout <<"Circumference: "<<circumference<<" unit"<<endl;
cout<<"Area: "<<findArea()<<" unit^2"<<endl;
cout<<"\n"<<endl;
}

}
};

int main()
{
Circle c1,c2,c3;
c1.setRadius(21);
c1.findArea();
c1.printinfo();
c2.setDiameter(25);
c2.findArea();
c2.printinfo();
c3.setCircumference(28);
c3.findArea();
c3.printinfo();
    return 0;
}
