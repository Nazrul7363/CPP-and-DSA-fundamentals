#include<iostream>
using namespace std;
int main()
{
    int a , b , temp;
    cout<<"enter a and b :";
    cin >> a >> b;
    temp = a ;
    a = b ;
    b = temp;
    cout << "a :"<<a <<endl <<"b :"<<b; 
 return 0;
}