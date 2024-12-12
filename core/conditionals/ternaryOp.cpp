#include <iostream>

int main(){
    int age;
    std::cout << "Enter age: ";
    std::cin >> age;

    (age > 18) ? std::cout << "Yea!" : std::cout << "Naah!";
    return 0;
}