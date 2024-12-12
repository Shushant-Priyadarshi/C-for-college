#include <iostream>
#include <string>
using namespace std;


class Animal {
    public:
    string name;
    string food;

    Animal(string name, string food){
        this->name = name;
        this->food = food;
    }

    
};

class Carnivore : public Animal {
    public:
    int legs;

    Carnivore(string name,string food ,int legs) : Animal(name, food){
        this->legs = legs;
    }

    void getInfo(){
        cout << "Name: " << name  <<endl;
        cout << "Food: " << food  <<endl;
        cout << "Legs: " << legs  <<endl;
    }
};

int main(){
    Carnivore c1("Lion","Deer",4);
    Carnivore c2("Piranaha", "Fish",0);
    c1.getInfo();
    c2.getInfo();
    return 0;
}