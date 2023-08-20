#include<iostream>
using namespace std;

int main(){

     #ifndef ONLINE_JUDGE //not part of code, used to beautify i/p o/p
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif


    int a,b,c;
    cin >>a>>b>>c;

    cout << "Greatest Integer is "; 
    if(a>b){
        if(a>c){
            cout << a<< endl;
        } else{
            cout << c << endl;
        }
    } else {
        if(b>c){
            cout << b << endl;
        } else {
            cout << c << endl;
        }
    }
    return 0;
}