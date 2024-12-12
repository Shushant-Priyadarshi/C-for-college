#include<iostream>
#include<string>
using namespace std;



// only 1 class
// class demo{
//     int a ,b;
//     public:
//         void getData(){
//             cout << "Enter A: " ;
//             cin >> a ;
//             cout << "Enter B: " ;
//             cin >> b ;
//         }

//         friend int sum(demo);
// };

// int sum(demo obj){
//     return obj.a + obj.b;
// }

// int main(){
//     demo obj;
//     obj.getData();
//     cout << "sum: " << sum(obj);

//     return 0;
// }

//+++++++++++++++++++++++++++++++++++++++ 2 classes +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++


class Two;
class One{
    int num;
    public:
        void getNum(){
            cout << "Enter One num : ";
            cin >> num;
        }

        friend void compare(One,Two);
};


class Two{
    int num;
    public:
        void getNum(){
            cout << "Enter Two num : ";
            cin >> num;
        }

        friend void compare(One,Two);
};

void compare(One obj1,Two obj2){
    if(obj1.num > obj2.num){
        cout << "One is greater" <<endl;
    }else{
         cout << "Two is greater" <<endl;
    }
}

int main(){
    One obj1;
    obj1.getNum();

    Two obj2;
    obj2.getNum();
    compare(obj1,obj2);
    return 0;
}