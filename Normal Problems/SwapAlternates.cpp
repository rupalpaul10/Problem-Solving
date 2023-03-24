#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void swapelements(int arr[],int size)
{
    for(int i=0;i<size-1;i+=2)
    {
        swap(arr[i],arr[i+1]);
    }
}

int main()
{
    //int arr[5]={2,5,3,7,6};
    int size;
    int arr[10];
    cout<<"Enter the size of the array"<<endl;
    cin>>size;
    cout<<"Enter the elements of the array"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    swapelements(arr,size);
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<"\t";
    }
    return 0;
}
