#include<iostream>
using namespace std;

int firstoccurance(int arr[],int size,int key)
{
    int start=0;
    int end=size-1;
    int ans;

    while(start<=end)
    {
        int mid=start + (end-start)/2;
        if(arr[mid]==key)
        {
            ans=mid;
            end=mid-1;
        }
        else if(arr[mid]<key)
        {
            start=mid+1;
        }
        else
        {
            end=mid-1;
        }
        
    }
    return ans;
}

int lastoccurance(int arr[],int size,int key)
{
    int start=0;
    int end=size-1;
    int ans;

    while(start<=end)
    {
        int mid=start + (end-start)/2;
        if(arr[mid]==key)
        {
            ans=mid;
            start=mid+1;
        }
        else if(arr[mid]<key)
        {
            start=mid+1;
        }
        else
        {
            end=mid-1;
        }
        
    }
    return ans;
}

int main()
{
    //int arr[5]={2,5,3,7,6};
    int size,key;
    int arr[10];
    cout<<"Enter the size of the array"<<endl;
    cin>>size;
    cout<<"Enter the elements of the array"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the key to be searched"<<endl;
    cin>>key;
    cout<<"The first occurance of "<<key<<" is "<<firstoccurance(arr,size,key)<<" and the last occurance of "<<key<<" is "<<lastoccurance(arr,size,key)<<endl;
    
    return 0;
}    