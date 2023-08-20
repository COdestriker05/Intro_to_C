#include<iostream>
using namespace std;

// int main(){
//     char button;
//     cout<<"Input a Character : ";
//     cin >> button;

//     if(button=='a'){
//         cout<<"Hello"<<endl;
//     }else if(button=='b'){
//         cout<<"Namaste"<<endl;
//     }else if(button=='c'){
//         cout<<"Salut"<<endl;
//     }else if(button=='d'){
//         cout<<"Hallo"<<endl;
//     }else if(button=='e'){
//         cout<<"Ciao"<<endl;
//     }else{
//         cout<<"I am still learning more"<<endl;
//     }
//     return 0;
// }

// int main(){
//     char button;
//     cout<<"Input a Character : ";
//     cin>>button;

//     switch (button)
//     {
//     case 'a':
//         cout<<"Hello"<<endl;
//         break;
//     case 'b':
//         cout<<"Namaste"<<endl;
//         break;
//     case 'c':
//         cout<<"Salut"<<endl;
//         break;
//     case 'd':
//         cout<<"Hallo"<<endl;
//         break;
//     case 'e':
//         cout<<"Ciao"<<endl;
//         break;
//     default:
//         cout<<"I am still learning more!"<<endl;
//         break;
//     }
// }

int main(){
    float n1,n2;
    cin >> n1 >> n2;

    char op;
    cout<<"Enter an operator : ";
    cin >> op;

    switch (op)
    {
    case '+':
        cout<<"Sum = ";
        cout<<n1+n2<<endl;
        break;
    case '-':
        cout<<"Sub = ";
        cout<<n1-n2<<endl;
        break;
    case '*':
        cout<<"Mult = ";
        cout<<n1*n2<<endl;
        break;
    case '/':
        cout<<"Div = ";
        cout<<n1/n2<<endl;
        break;    
    default:
        cout<<"Invalid Input.";
        break;
    }
    return 0;
}