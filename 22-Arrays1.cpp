#include<iostream>
#include<climits>
using namespace std;

// int main(){
//     int arr1[4]={1,2,3,4};
//     cout<<arr1[2]<<endl;

//     int arr2[3];
//     arr2[0] = 34;
//     arr2[1] = 56;
//     arr2[2] = 76;
//     cout<<arr2[0]<<endl;

//     int n;
//     cin>>n;
//     int arr3[n];
//     for(int i=0; i<n; i++){
//         cin>>arr3[i];
//     }
//     for(int i=0; i<n; i++){
//         cout<<arr3[i]<<" ";
//     }
//     cout<<endl;
//     return 0;
// }


// -------------------------------------------------------------------
// Find maximum and minimum in array

int main(){
    int n;
    int arr[n];
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int maxNo = INT_MIN;
    int minNo = INT_MAX;
    for(int i=0; i<n; i++){
        maxNo = max(maxNo,arr[i]);
        minNo = min(minNo,arr[i]);
    }
    cout<<"Maximun : "<<maxNo<<endl;
    cout<<"Minimun : "<<minNo<<endl;
    return 0;
}
