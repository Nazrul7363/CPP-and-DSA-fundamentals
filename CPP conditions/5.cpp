#include<iostream>
using namespace std;
int main()
{
    int  a,b;
    char ch;
    cout <<"enter an operator (+ - * /) :";
    cin>>ch;
    cout <<"Enter two numbers :";
    cin >> a >> b;
    switch(ch){
        case '+' :
            cout <<a <<ch <<b <<":"<<a+b<<endl;
            break;
        case '-' :
            cout <<a <<ch <<b <<":"<<a-b<<endl;
            break;
        case '*' :
            cout <<a <<ch <<b <<":"<<a*b<<endl;
            break;
        case '/' :
            cout <<a <<ch <<b <<":"<<a/b<<endl;
            break;
        default: 
            cout << "Error! The operator is not correct"; 
    }
 return 0;
}