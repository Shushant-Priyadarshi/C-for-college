#include <string>
#include <iostream>
using namespace std;

class Student{
    public:
        string name;
        double cgpa;


        Student(string name,double cgpa){
            cout<< "Allocating memory!!" <<endl;
            this->name = name;
            this->cgpa = cgpa;
        }

        void getInfo(){
            cout << "Name: " << name << endl;
            cout << "CGPA: " << cgpa << endl;
        }

        ~Student(){
            cout << "Deleting the allocated memory!!" <<endl;
            
        }
}; 

int main(){
    Student s1("Shushant",9.4);
    return 0;
}