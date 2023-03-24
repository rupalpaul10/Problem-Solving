#include<iostream>
using namespace std;

int findunique(int arr[],int size)
{
    int element=0;
    for(int i=0;i<size;i++)
    {
        element=element^arr[i];
    }
    return element;
}

int main()
{
    //int size=2M+1 where M is the number which will appear twice in the array
    int size;
    int arr[10];
    cout<<"Enter the size of the array"<<endl;
    cin>>size;
    cout<<"Enter the elements of the array"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    cout<<"unique element: "<<findunique(arr,size)<<endl;
    return 0;
}    
