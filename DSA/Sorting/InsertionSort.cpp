#include<iostream>
using namespace std;

void insertionsort(int arr[],int size)
{
    for(int i=1;i<size;i++)
    {
        int j=i-1;
        int x=arr[i];
        while(j>-1 && arr[j]>x)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=x;
    }

    cout<<"After insertion sort"<<endl;
    cout<<"The sorted array is"<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int n;
    int arr[10];
    cout<<"Enter the size"<<endl;
    cin>>n;
    cout<<"Enter the elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    insertionsort(arr,n);
    return 0;
}