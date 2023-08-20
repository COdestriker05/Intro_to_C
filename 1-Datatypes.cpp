#include<iostream>
using namespace std;

int main(){
    int a; //declaration
    a = 12; //initialisation
    cout << "Size of int " << sizeof(a) << endl;

    float b;
    cout << "Size of float " << sizeof(b) << endl;

    char c;
    cout << "Size of character " << sizeof(c) << endl;

    bool d;
    cout << "Size of boolean " << sizeof(d) << endl;

    double e;
    cout << "Size of double " << sizeof(e) << endl;

    long int f;   
    cout << "Size of long " << sizeof(f) << endl;

    short int g;
    cout << "Size of short " << sizeof(g) << endl;
}

// Type modifiers :-
// 1. signed  --  4 bytes -- -2,147,483,648 to 2,147,483,647
// 2. unsigned  --  4 bytes -- 0 to 4,294,967,295
// 3. long  --  8 bytes(but we get onle 4 bytes in my editor)  --  -9,223,372,036,854,775,808 to 9,223,372,036,854,775,807
// 4. short  --  2 bytes  --  -32,768 to  32,767
