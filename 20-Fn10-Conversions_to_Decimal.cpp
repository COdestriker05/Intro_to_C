// #include<iostream>
#include<bits/stdc++.h>
using namespace std;

int binarytodecimal(int n){

    int ans = 0;
    int x = 1;
    while(n>0){
        int lastdigit = n%10;
        ans += x*lastdigit;
        x *= 2;
        n /= 10;
    }
    return ans;
}

int octaltodecimal(int o){

    int ans = 0;
    int x = 1;
    while(o>0){
        int lastdigit = o%10;
        ans += x*lastdigit;
        x *= 8;
        o /= 10;
    }
    return ans;
}

int hexadecimaltodecimal(string s){

    int ans = 0;
    int x = 1;

    int l = s.size();
    for(int i=l-1; i>=0; i--){
        if(s[i]>='0' && s[i]<='9'){
            ans += x*(s[i]-'0');
        }
        else if(s[i]>='A' && s[i]<='F'){
            ans += x*(s[i]-'A' + 10);
        }
        x *= 16;
    }
    return ans;
}

int main(){

    cout<<"Select Conversion Type -"<<endl;
    cout<<"1. Binary to Decimal"<<endl;
    cout<<"2. Octal to Decimal"<<endl;
    cout<<"3. Hexadecimal to Decimal"<<endl;
    
    int select;
    cout<<"Enter your choice : ";
    cin>>select;

    int n,o;
    string s;

    switch (select)
    {
        case 1:
            cin >>n;
            cout<<binarytodecimal(n)<<endl;
            break;
        case 2:
            cin >>o;
            cout<<octaltodecimal(o)<<endl;
            break;
        case 3:
            cin >>s;
            cout<<hexadecimaltodecimal(s)<<endl;
            break;
        default:
            cout<<"Invalid Input"<<endl;
            break;
    }

    return 0;
}