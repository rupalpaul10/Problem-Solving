#include<iostream>
#include<cstdlib>

using namespace std;

int returncount(int arr[],int size,int key)
{
    int count=0;
    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if((abs(arr[i]-arr[j]))==key)
            {
                count+=1;
            }
        }
    }
    return count;
}

int main()
{
    int n,k;
    int arr[10];
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<returncount(arr,n,k)<<endl;
    return 0;
}