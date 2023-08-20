// #include -- preprocessor directive used to include files
// <iostream> -- header file for taking i/p and printing o/p

#include<iostream>
using namespace std;


int main(){  // The execution of code begins from main function (Mandatory for any program)

// cout -- used to display o/p in quotation marks
    
    cout << "Hello world\n";  // Not to use this std:: for every time we can use (Using namespace std) in the beginning
                                    // of the code to specify the standard namespace
    

    int amount1;
    cin >> amount1; // used to get i/p  and store into given variable

    int amount2;
    cin >> amount2;

    int sum = amount1 + amount2;
    
    cout << "Sum = " << sum <<endl;

    return 0;  // Exit status of a function. A/f this any written statement never be executed.

} // Curly braces indicate the start and enf of a function.

