#include <iostream>

int main(){
    std::string name;
    int age ;
    std::cout << "What is your name? : ";
    std::getline(std::cin >> std::ws, name) ; // for spacing std::ws will eliminate any whitespace character

    std::cout << "What is your age?: ";
    std::cin >> age;

    std::cout << "Hello, " << name << "!" << std::endl;
    std::cout << "Your age is : " << age ;
    return 0;
}