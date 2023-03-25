#include<iostream>
using namespace std;

int getpivot(int arr[],int size)
{
    int start=0;
    int end=size-1;
    
    while(start<end)
    {
        int mid=start + (end-start)/2;
        if(arr[mid]>=arr[0])
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

int binarysearch(int arr[],int s,int e,int key)
{
    int start=s;
    int end=e;
    
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

int search(int arr[],int size,int key)
{
    if(arr[getpivot(arr,size)]<=key && key<=arr[size-1])
    {
        int s=getpivot(arr,size);
        int e=size-1;
        return(binarysearch(arr,s,e,key));
    }
    else
    {
        int s=0;
        int e=getpivot(arr,size)-1;
        return(binarysearch(arr,s,e,key));
    }

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
    if(search(arr,size,key)==-1)
    {
        cout<<"The key is not found"<<endl;
    }
    else
    {
        cout<<"The key is found at index "<<search(arr,size,key)<<endl;
    }
    
    return 0;
}    