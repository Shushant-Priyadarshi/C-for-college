#include <iostream>

// if-else
// int main(){
//     int age;
//     std::cout << "Enter your age: ";
//     std::cin >> age;

//     if(age >= 18){
//         std::cout << "Allowed to vote!";
//     }else{
//         std::cout << "Not allowed to vote!";
//     }
//     return 0;
// }

// switch statements

int main()
{
    int week;
    std::cout << "Enter week day (1-7)";
    std::cin >> week;

    switch (week)
    {
    case 1:
        std::cout << "Sunday";
        break;
    case 2:
        std::cout << "Monday";
        break;
    case 3:
        std::cout << "Tuesday";
        break;
    case 4:
        std::cout << "Wednesday";
        break;
    case 5:
        std::cout << "Thursday";
        break;
    case 6:
        std::cout << "Friday";
        break;
    case 7:
        std::cout << "Saturday";
        break;
    }
    return 0;
}