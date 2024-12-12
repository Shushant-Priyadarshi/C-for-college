#include <iostream>

int main(){
    std::string name;
    std::cout << "Enter your name: ";
    std::getline(std::cin , name);
    std::cout << "You have " << name.length() << " letter in your name!"; //string length
    return 0;
}

//name.empty() returns a boolean value
