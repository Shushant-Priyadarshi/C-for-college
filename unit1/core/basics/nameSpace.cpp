#include <iostream>
/*
NameSpace = provides a solution for preventing name conflicts in large objects. 
            Each entity need a unique name. A namespace allows for identifying named entities 
            as long as the namespace are different.
*/

namespace first {
    int x = 13;  
}

namespace second {
    int x =14;
}

typedef std::string text;
/*
typedef = A reserved keyword used to create an additional name (alias) for another data type.
        New identifier for an existing type helps with readabilty and reduces typos .
        Replaced with 'using' (work better w/ templates)
*/
using text2 = std::string;

int main(){
    using std::cout;
    using std::string; 

    int x = 12;

    cout << x << "\n";
    cout << first::x  << "\n";
    cout << second::x  << "\n";

    text name = "Shushi";
    text2 name2 = "Pri";
    cout << name ;
    cout << name2 ;
    return 0;
}

