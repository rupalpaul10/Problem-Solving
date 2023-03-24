#include<iostream>
using namespace std;

void pairsum(int arr[],int n)
{
    cout<<"The Pairs are"<<endl;
    for(int i=0;i<n;i++)
    {
        int element=arr[i];
        for(int j=i+1;j<n;j++)
        {
            if(element+arr[j]==5 && element<arr[j])
            {
                cout<<element<<" "<<arr[j]<<"\t";
                      
            }

        }
    }
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
    pairsum(arr,size);
    return 0;
}
