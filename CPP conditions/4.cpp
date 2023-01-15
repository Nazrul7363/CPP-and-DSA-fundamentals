#include<iostream>
using namespace std;
int main()
{
    int num;
    cout <<" Enter an int:";
    cin >> num;
    if(num <0)
        cout<<"The number is negative and skipped ";
    else
        cout <<"Enter a negative number :-(" <<endl;
 return 0;
}