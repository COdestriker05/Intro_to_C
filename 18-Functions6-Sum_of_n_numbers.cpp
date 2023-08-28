#include<iostream>
using namespace std;

int sum(int n){
    // int a = 1;
    int total = 0;
    for(int i=1; i<=n; i++){
        total += i;
    }
    return total;
}
int main(){

    int n;
    cin>>n;

    cout<<sum(n)<<endl;

    return 0;
}