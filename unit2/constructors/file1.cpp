#include <string>
#include <iostream>
using namespace std;

class Student{
public:
    string name;
    double cgpa;

    Student(string name, double cgpa)
    {
        this->name = name;
        this->cgpa = cgpa;
    }

    void getInfo()
    {
        cout << name << std::endl;
        cout << cgpa << std::endl;
    }
};

int main()
{
    Student s1("Shushant", 9.4);
    Student s2(s1);
    cout <<s1.cgpa  <<endl;
    s2.cgpa = 8;
    cout << s1.cgpa <<endl;
    // s2.getInfo();
    return 0;
}