#include <iostream>
//Version 2

using namespace std;
class Circle{

float radius=0;
float circumference=0;
float diameter=0;

public:
const float PI = 3.14;
    void setRadius(float r){
        radius = r;
    }
    void setCircumference(float c){
        radius = c/(2*PI);
    }
    void setDiameter(float d){
        radius = d/2;
    }
    float Area;
    float findArea(){
        if (radius>0){
         Area = PI * radius*radius;
    return Area;
    }

    else {
        cout<<"NO input is given"<<endl;
    }


    }
void printinfo(){
    if (radius>0){cout <<"Radius: "<<radius<<" unit"<<endl;
cout<<"Area: "<<findArea()<<" unit^2"<<endl;

cout<<"\n"<<endl;}

else if(diameter>0){
    cout <<"Diameter: "<<diameter<<" unit"<<endl;
cout<<"Area: "<<findArea()<<" unit^2"<<endl;
cout<<"\n"<<endl;
}
else if(circumference>0){
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
c2.setDiameter(21);
c2.findArea();
c2.printinfo();
c3.setCircumference(21);
c3.findArea();
c3.printinfo();
    return 0;
}
