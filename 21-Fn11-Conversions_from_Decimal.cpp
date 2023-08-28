#include<bits/stdc++.h>
using namespace std;

int decimalToBinary(int n){
    int x = 1;
    int ans = 0;
    while(x <= n)
        x *= 2;
    x /= 2;

    while(x>0)
    {
        int lastDigit = n/x;
        n -= lastDigit*x;
        x /= 2;
        ans = ans*10 + lastDigit;
    }
    return ans;
}

int main(){

    cout<<"Select Conversion Type -"<<endl;
    cout<<"1. Decimal to Binary"<<endl;
    cout<<"2. Decimal to Octal"<<endl;
    cout<<"3. Decimal to Hexadecimal"<<endl;
    
    int select;
    cout<<"Enter your choice : ";
    cin>>select;

    int n,o;
    string s;

    switch (select)
    {
        case 1:
            cin >>n;
            cout<<decimalToBinary(n)<<endl;
            break;
        case 2:
            // cin >>o;
            // cout<<decimalToOctal(o)<<endl;
            break;
        case 3:
            // cin >>s;
            // cout<<decimalToHexadecimal(s)<<endl;
            break;
        default:
            cout<<"Invalid Input"<<endl;
            break;
    }
    return 0;
}