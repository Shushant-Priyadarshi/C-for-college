#include <iostream>
#include <string>
using namespace std;

class Animal{
    public:
    string name;
};

class Cat : public Animal{

};

int main(){
    Cat c1;
    c1.name = "Cat";
    cout << c1.name << "\n";
    return 0;
}