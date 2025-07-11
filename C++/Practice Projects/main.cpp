#include <iostream>

using namespace std;
class person_INFO{
public:
    string Name;
    int age;
    string city;

  void  printinfo(){
  cout<<"Person's Name: "<< Name<<endl;
  cout<<"Person's Age: "<< age<<endl;
  cout<<"Person's Hometown: "<< city<<endl;
  }
};

int main()
{
    person_INFO p1;
    p1.Name="Aryan";
    p1.age=21;
    p1.city="Omega";
    p1.printinfo();

    return 0;
}
