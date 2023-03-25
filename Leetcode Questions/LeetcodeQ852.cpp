#include<iostream>
using namespace std;

int mountainpeak(int arr[],int size)
{
    int start=0;
    int end=size-1;
    
    while(start<end)
    {
        int mid=start + (end-start)/2;
        if(arr[mid]<arr[mid+1])
        {
            start=mid+1;
        }
        else
        {
            end=mid;
        }
        
    }
    return start;
}

int main()
{
    //int arr[5]={3,4,5,1};
    int size;
    int arr[10];
    cout<<"Enter the size of the array"<<endl;
    cin>>size;
    cout<<"Enter the elements of the array"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    cout<<"The peak of the mountain is "<<mountainpeak(arr,size)<<endl;
    
    
    return 0;
}    