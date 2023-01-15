#include<iostream>
using namespace std;
int main()
{
    int num=12345 , i =0 , a , b , x;
    while(num!=0)
    {
        x=num%10;
        if( i == 1)
            a=x;
        if(i==4)
            b=x;
        num =num /10;
        i++;

    }
    cout <<a <<" + "<<b << " = " << a+b;
 return 0;
}