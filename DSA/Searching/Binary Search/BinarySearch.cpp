#include<iostream>
using namespace std;

int binarysearch(int arr[],int size,int key)
{
    int start=0;
    int end=size-1;
    
    while(start<=end)
    {
        int mid=start + (end-start)/2;
        if(arr[mid]==key)
        {
            return mid;
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
    return -1;
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
    if(binarysearch(arr,size,key)==-1)
    {
        cout<<"The key is not found"<<endl;
    }
    else
    {
        cout<<"The key is found at index "<<binarysearch(arr,size,key)<<endl;
    }
    
    return 0;
}    