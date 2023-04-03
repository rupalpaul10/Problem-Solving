#include<iostream>
using namespace std;

void swap(int *i,int *j)
{
    int temp;
    temp=*i;
    *i=*j;
    *j=temp;
}

void selectionsort(int arr[],int size)
{
    for(int i=0;i<size-1;i++)
    {
        int k=i;
        for(int j=i;j<size;j++)
        {
            if(arr[j]<arr[k])
            {
                k=j;
            }
        }
        swap(arr[i],arr[k]);
    }
    cout<<"After selection sort"<<endl;
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
    
    selectionsort(arr,n);
    return 0;
}