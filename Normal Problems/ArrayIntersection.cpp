#include<iostream>
using namespace std;

void intersection(int arr1[],int arr2[],int n,int m)
{
    cout<<"The intersection array is"<<endl;
    for(int i=0;i<n;i++)
    {
        int element=arr1[i];
        for(int j=0;j<m;j++)
        {
            if(element==arr2[j])
            {
                cout<<element<<" ";
                arr2[j]=-1;
                break;
            }

        }
    }
}

int main()
{
    //int arr[5]={2,5,3,7,6};
    int n,m;
    int arr1[10],arr2[10];
    cout<<"Enter the size of the 1st array"<<endl;
    cin>>n;
    cout<<"Enter the size of the 2nd array"<<endl;
    cin>>m;
    cout<<"Enter the elements of the 1st array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr1[i];
    }
    cout<<"Enter the elements of the 2nd array"<<endl;
    for(int j=0;j<m;j++)
    {
        cin>>arr2[j];
    }
    
    intersection(arr1,arr2,n,m);

    return 0;
}