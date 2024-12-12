#include <iostream>
using namespace std;

// int main(){
//     int a =20;
//     int &refA =a;
//     refA =  refA * 2;
//     cout << "Ref A= " << refA << endl;
//     cout << "A= " << a << endl;
//     return 0;
// }

void  change (int &n){
    n = n *10;
    cout << "From funtion: " << n  <<endl;
}

int main(){
    int n =20;
    change(n);
    cout << "Inside Main: " << n <<endl;
    return 0;
}




