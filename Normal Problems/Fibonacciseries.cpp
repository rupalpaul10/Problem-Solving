#include<iostream>
using namespace std;

int main()
{
    int n,i;
    cout<<"Enter the range of fibonacci series"<<endl;
    cin>>n;
    int a=0;
    int b=1;
    cout<<a<<" "<<b<<" ";
    for(i=0;i<n;i++)
    {
        int sum=a+b;
        cout<<sum<<" ";
        a=b;
        b=sum;
    }
    
    return 0;
}