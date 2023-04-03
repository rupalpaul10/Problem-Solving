#include<iostream>
using namespace std;

void swap(int *i,int *j)
{
    int temp;
    temp=*i;
    *i=*j;
    *j=temp;
}

void bubblesort(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        bool swapped=false;
        for(int j=0;j<size;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(&arr[j],&arr[j+1]);
                swapped=true;
            }
        }
        if(swapped==false)
        {
            break;
        }    
    }

    cout<<"After bubble sort"<<endl;
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
    
    bubblesort(arr,n);
    return 0;
}