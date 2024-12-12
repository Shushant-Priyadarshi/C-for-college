#include<iostream>
#include<string>
using namespace std;


// Overloading the + operator

// class demo{
//     int num;
//     public :
//         void getNum(){
//             cout << "Enter Num 1: " ;
//             cin >> num ;
//         }

//         void showNum(){
//             cout << "Number = " << num << endl;
//         }

//         demo operator+ (demo obj){
//             demo resultObj;
//             resultObj.num = num + obj.num;
//             return resultObj;
//         }


// };

// int main(){
//     demo obj1 , obj2 , sumObj1AndObj2;
//     obj1.getNum();
//     obj2.getNum();
//     sumObj1AndObj2 = obj1 + obj2;
//     sumObj1AndObj2.showNum();
//     return 0;
// }


// Overloading the * operator

// class Student{
//     string name;
//     int score;

//     public:
//         Student(string name, int score){
//             this->name = name;
//             this->score = score;
//         }
//         Student(){
//             name = "";
//             score =0;
//         }
//         void printInfo(){
//             cout << "Name: " << name << endl;
//             cout << "Score: " << score << endl;
//             cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
//         }
//         Student operator* (Student obj){
//             Student resultScore;
//             resultScore.name = name + " * " + obj.name;
//             resultScore.score =  score * obj.score;
//             return resultScore;
//         }

       
//  };

// int main(){
//     Student s1("Vipul",80);
//     Student s2("Shushant",50);
//     Student s3;
//     s3 = s1 * s2;
//     s3.printInfo();
//     return 0;
// }


//Nameless Objects

// class Student{
//     string name;

//     public:
//         Student(string name){
//             this->name = name;
//         }

//         void printName(){
//             cout << "Name: " << name <<endl;
//         }
// };

// int main(){
//     Student("Shushnat").printName();
//     return 0;
// }


//overloading binary operators

class demo{
    int x;
    public :
        void getX(){
            cout << "Enter x: " ;
            cin >> x ;
        }
        void printX(){
            cout << x << endl ;
        }

        void operator++(int){
            x = x+1;
        }
};

int main(){
    demo obj;
    obj.getX();
    cout << "Original value: ";
    obj.printX();
    //++ obj;
     obj++;
    cout << "Modified value: ";
    obj.printX();

    return 0;
}