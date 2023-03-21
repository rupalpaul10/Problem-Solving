#include<iostream>
using namespace std;

int getmax(int arr[],int size)
{
    int max=INT32_MIN;
    for(int i=0;i<size;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    return max;       
}

int getmin(int arr[],int size)
{
    int min=INT32_MAX;
    for(int i=0;i<size;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    return min;      
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
    cout<<"The maximum value is:"<<getmax(arr,size)<<endl;
    cout<<"The minimum value is:"<<getmin(arr,size)<<endl;
    return 0;
}