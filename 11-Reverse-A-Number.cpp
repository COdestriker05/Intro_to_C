#include<iostream>
#include<math.h>
#include<cmath>
using namespace std;

// ----------------------------------------------------
// For find prime number

int main(){

    int n;
    cin>>n;

    int i;
    bool flag=0;
    for(i=2; i<sqrt(n); i++){
        if(n%i==0){
            cout<<"Non-Prime"<<endl;
            flag=1;
            break;
        }
    }
    if(flag==0){
        cout<<"Prime"<<endl;
    }
}

// ----------------------------------------------------------------
// Reverse a number

int main(){

    int n;
    cin>>n;

    int reverse=0;
    while(n>0){
        int lastdigit = n%10;
        reverse = reverse*10 + lastdigit;
        n = n/10;
    }
    cout<<reverse<<endl;

    return 0;
}

// -------------------------------------------------------------------
// Check If a given number is Armstrong number or not
// A number is called as armstrong number if sum of cubes of each element comes equal to same the given number
// Ex - 153

int main(){

    int n;
    cin>>n;

    int sum=0;
    int originaln=n;

    while(n>0){
        int lastdigit = n%10;
        sum = sum + pow(lastdigit,3);
        cout<<pow(lastdigit,3);
        cout<<sum<<endl;
        n=n/10;
    }
    cout<<sum<<endl;
    if(sum==originaln){
        cout<<"Armstrong Number"<<endl;
    }
    else{
        cout<<"Not A Armstrong Number"<<endl;
    }

    return 0; 
}
