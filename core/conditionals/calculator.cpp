#include <iostream>

int main(){
    char operation;
    int num1;
    int num2;
    std::cout << "**************************CALCULATOR*****************************" << std::endl;

    std::cout << "Enter Operation ( + , - , / , *): ";
    std::cin >> operation;

    std::cout << "Enter number 1 : ";
    std::cin >> num1;

    std::cout << "Enter number 2 : ";
    std::cin >> num2;

    switch (operation)
    {
    case '+':
        std::cout << "Adding two numbers: " << num1 + num2 << std::endl;
        break;
    case '-':
        std::cout << "Subtracting two numbers: " << num1 - num2 << std::endl;
        break;
    case '/':
        std::cout << "Dividing two numbers: " << num1 / num2 << std::endl;
        break;
    case '*':
        std::cout << "Multiplying two numbers: " << num1 * num2 << std::endl;
        break;
    }

    std::cout << "*******************************************************";
}