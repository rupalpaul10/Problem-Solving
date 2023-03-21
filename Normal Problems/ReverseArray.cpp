#include<iostream>
using namespace std;

void reversearray(int arr[],int size)
{
    cout<<"Printing the array in reverse order"<<endl;
    for(int i=size-1;i>=0;i--)
    {
        cout<<arr[i]<<"\t";
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
    reversearray(arr,size);
    return 0;
}    
