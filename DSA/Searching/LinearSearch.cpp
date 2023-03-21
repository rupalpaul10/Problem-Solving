#include<iostream>
using namespace std;

bool linearsearch(int arr[],int size,int key)
{
    for(int i=0;i<size;i++)
    {
        if(arr[i]==key)
        {
            return true;
        }
    }
    return false;
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
    if(linearsearch(arr,size,key))
    {
        cout<<"The key is found"<<endl;
    }
    else
    {
        cout<<"The key is not found"<<endl;
    }
    
    return 0;
}    