#include<iostream>
using namespace std;
# define MAX 100;

void display(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        printf("%d",arr[i]);
        cout<<endl;
    }
}
void insert (int arr[], int size, int pos ,int value){
    size++;
    for(int i=size;i>=pos;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[pos-1]=value;
}






int main()
{
    int size ,pos,value;
    int arr[100];
    cout<<"Enter the size  of the array , Position at which you want to insert , the value you want to store: ";
    cin>>size>>pos>>value;
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    cout<<"The elements in the array are:";
    display(arr , size);
    insert(arr,size,pos,value);
    cout<<"after Insertion the array looks like :";
    display(arr , size+1);


 return 0;
}

