#include <iostream>
using namespace std;

int main(){
    int *pX = nullptr;
    int x = 20;
    //pX = &x;

    if(pX == nullptr){
        cout << "Not assigned!" << endl;
        cout << pX << endl;
    }else{
        cout << "Assigned!" <<endl;
    }
    
    return 0;
}