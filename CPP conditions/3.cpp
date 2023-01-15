#include<iostream>
using namespace std;
int main()
{
    int sp , cp , profit , loss ;
    cout <<"Enter CP :";
    cin>> cp ;
    cout <<"Enter SP :";
    cin>> sp; 
    if(sp >cp)
        cout<<"Profit : " << sp-cp << endl ;
    else if (cp > sp)
        cout << "loss :" << cp - sp << endl;
    else
    {
        cout << " No Profit or loss";
    }
    

 return 0;
}