//  For loop :     // Used when no. of iteration matters for us
//  for(initialisation; condition; update){
    // body
// }

#include<iostream>
using namespace std;

// int main(){
    
//     int n;
//     cin >> n;

//     int sum = 0;
//     for(int i = 1; i<=n; i++){
//         sum+=i;
//     }

//     cout <<"Sum = "<< sum << endl;

//     return 0;
// }

// While loop :    // Used when no. of iteration doesn't matter
// while(condition){
    // body
// }

// Ex : Taking input from user until user give negative i/p

// int main(){

//     int n;
//     cin >> n;

//     while(n>0){
//         cout << n << endl;
//         cin >> n;
//     }

//     return 0;
// }

// Do while loop :  
// do{
    // body
// }while(condition); 

int main(){
    int n;
    cin >> n;

    do{
        cout << n << endl;
        cin >> n;
    }while(n>0);

    return 0;
}
