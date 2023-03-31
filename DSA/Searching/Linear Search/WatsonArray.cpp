#include<iostream>
using namespace std;

bool search(int arr[],int size)
{
    int sum=0;
    int ls=0;
    int rs=0;
    for(int i=0;i<size;i++)
    {
        sum+=arr[i];
    }    
    for(int j=0;j<size;j++)
    {
        if(j==0)
        {
            ls=0;
        }
        else
        {
            ls+=arr[j-1];
        }
        rs=sum-ls-arr[j];
        if(ls==rs)
        {
            return true;
        }
    }
    return false;   
    
}

int main()
{
    int n;
    int arr[10];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    if(search(arr,n))
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }
    return 0;
}
    
        
    
    