#include <iostream>
#include <string>
using namespace std;

class Student{
    public:
        int roll;
        string name;
        double cgpa;

        Student(int roll,string name, double cgpa){
            this->roll = roll;
            this->name = name;
            this->cgpa = cgpa;
        }

        void eat(){
            cout << "Student is eating"<<endl;
        }

        void eat(string food){
            cout << "Student is eating: " << food <<endl;
        }

        void printInfo(){
            cout << "Roll: " << roll <<endl;
            cout << "Name: " << name <<endl;
            cout << "CGPA: " << cgpa <<endl;
        }

        static void Greet(){
            cout << "Student is Greeting!!\n";
        }
};

int main(){
    Student s1(1,"Shushant",9.4);
    s1.printInfo();
    s1.eat("Pizza");
    Student::Greet();
    return 0;
}