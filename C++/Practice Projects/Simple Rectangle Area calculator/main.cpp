#include <iostream>

using namespace std;

class RectangleArea{
    public:
double length;
double width;

void setdimensions (double l, double w){
length=l;
width = w;

}

void getArea(){
cout<<"Area :"<<length*width<<endl;
}
};

int main()
{
  RectangleArea r1;

  r1.setdimensions(2,4);
  r1.getArea();
    return 0;
}
