#include<iostream>
using namespace std;

void getfreq(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        int j=0,count=0;
        while(j<size)
        {
            if(arr[i]==arr[i+j+1])
            {
                count+=1;
            }
            j+=1;
        }
        cout<<"The frequence of "<<arr[i]<<" is "<<count<<endl;
    }
}

int main()
{
    
    int size;
    int arr[10];
    cout<<"Enter the size of the array"<<endl;
    cin>>size;
    cout<<"Enter the elements of the array"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    getfreq(arr,size);
    return 0;
}    