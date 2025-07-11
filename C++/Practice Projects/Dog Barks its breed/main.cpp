#include <iostream>

using namespace std;

class DOG{
public:
    string Name;
    string breed;

void bark(){
cout<<"Hello, I am "<<Name<<" and I am a "<<breed<<endl;
}
};
int main()
{
    DOG d1;
    d1.Name="Doggy";
    d1.breed="Pompom";
    d1.bark();
    return 0;
}
