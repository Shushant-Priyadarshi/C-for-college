#include <iostream>
#include <string>
using namespace std;

int main(){
    string names[] = {"Shushant","Shushi","Dom"};
    // for(int i=0 ; i <= sizeof(names)/sizeof(names[0]) ; i++){
    //     cout << names[i] <<endl;
    // }

    for(string name : names){
        cout << name <<endl;
    }
    return 0;
}