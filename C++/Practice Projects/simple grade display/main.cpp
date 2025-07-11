#include <iostream>

using namespace std;

class studentINFO{
private:
    string Name;
    char grade;

public:
  void  setGrade(char g){
    grade = g;
    }
 void printReport(){
 cout<<"Name: "<<Name<<endl;
 cout<<"Grade: "<<grade<<endl;
 }
 void setName(string nameval){
 Name=nameval;}
};
int main()
{
   studentINFO s1;
   s1.setName("Omega");
   s1.setGrade('A');
   s1.printReport();
    return 0;
}
