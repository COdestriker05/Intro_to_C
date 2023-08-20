// Continue :-  Skip to the next iteration of the loop
// Breaak :-  Terminate the loop

#include<iostream>
using namespace std;

int main(){
    int pocketmoney = 3000;
    for(int date = 1; date<=30; date++){
        if(date%2==0){
            continue;
        }
        if(pocketmoney==0){
            break;
        }
        cout <<"Go Out Today."<<endl;
        pocketmoney-=500;
    }
    return 0;
}
---------------------------------------------------------------------
int main(){
    for(int i=1; i<=100; i++){
        if(i%3==0){
            continue;
        }
        cout << i <<endl;
    }
    return 0;
}
--------------------------------------------------------------------
int main(){
    int n;
    cin >> n;

    int i;
    for(i=2; i<n; i++){
        if(n%i==0){
            cout<<"Non-Prime"<<endl;
            break;
        }
    }
    if(i==n){
        cout<<"Prime"<<endl;
    }
    return 0;
}
---------------------------------------------------------------------
int main(){
    int a,b;
    cin >> a >> b;

    cout<<"Prime no. between "<<a<<" and "<<b<<" are :"<<endl;
    for(int num = a; num<=b; num++){
        int i;
        for(i=2; i<num; i++){
            if(num%i==0){
                break;
            }
        }
        if(num==i){
            cout<<num<<endl;
        }
    }
    return 0;
}