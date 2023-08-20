#include<iostream>
using namespace std;

// -------------------------------------------------------
//  * * * * * * 
//  * * * * * *
//  * * * * * *
//  * * * * * *
//  * * * * * *
//  * * * * * *
//  * * * * * *

int main(){
    int rows,cols;
    cin>>rows>>cols;

    for(int i=1; i<=rows; i++){
        for(int j=1; j<=cols; j++){
            cout<<"* ";
        }
        cout<<endl;
    }

    return 0;
}

// ---------------------------------------------------------------
//  * * * * * *
//  *         *
//  *         *
//  *         *
//  *         *
//  *         *
//  * * * * * *

int main(){

    int row, col;
    cin >> row>> col;

    for(int i=1; i<=row; i++){
        for(int j=1; j<=col; j++){
            if(i==1 || i==row || j==1 || j==col){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
} 

//  -------------------------------------------------------------

// Inverted Half Pyramid
// * * * * *
// * * * * 
// * * * 
// * *
// * 

int main(){

    int n;
    cin >> n;

    for(int i=n; i>=1; i--){
        for(int j=1; j<=i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}

//  ----------------------------------------------------------------
//  Half Pyramid
//         *
//       * *
//     * * *
//   * * * *
// * * * * *

// int main(){

    int n;
    cin >> n;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(j<=n-i){
                cout<<"  ";
            } else{
                cout<<"* ";
            }
        }
        cout<<endl;
    }

    return 0;
}

// ---------------------------------------------------------------
// Half Pyramid Using Numbers
// 1
// 2 2
// 3 3 3
// 4 4 4 4
// 5 5 5 5 5

int main(){

    int n;
    cin >> n;
    cout<<endl;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}

// -----------------------------------------------------------------
// Floyd's Triangle
// 1
// 2  3
// 4  5  6
// 7  8  9  10
// 11 12 13 14 15

int main(){

    int n;
    cin >> n;
    cout << endl;

    int count = 1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }
    return 0;
}

// -----------------------------------------------------------------
// Butterfly Pattern;
// *             *
// * *         * *
// * * *     * * *
// * * * * * * * *
// * * * * * * * *
// * * *     * * *
// * *         * *
// *             *

int main(){
    
    int n;
    cin >> n;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<"* ";
        }
        int space = 2*n - 2*i;
        for(int j=1; j<=space; j++){
            cout<<"  ";
        }
        for(int j=1; j<=i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }

    for(int i=n; i>=1; i--){
        for(int j=1; j<=i; j++){
            cout<<"* ";
        }
        int space = 2*n - 2*i;
        for(int j=1; j<=space; j++){
            cout<<"  ";
        }
        for(int j=1; j<=i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }

    return 0;
}