#include <iostream>

using namespace std;
class Student{
string name;
int rollno;
char grade;

public:
    Student(string n, int r){//use of constructor, doesn't have any return type
    name = n;
    rollno=r;
    }
void setGrade(char g){
grade=g;
}
char getGrade(){
return grade;
}

void printer(){
cout<<"Name: "<<name<<endl;
cout<<"Roll: "<<rollno<<endl;
cout<<"Grade: "<<grade<<endl;
cout<<"\n"<<endl;
}
};

int main()
{
Student s1("Aryan", 1234);
s1.setGrade('A');
s1.printer();

Student s2("Omega", 1332);
s2.setGrade('B');
s2.printer();

    return 0;
}
