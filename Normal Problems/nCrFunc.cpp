#include<iostream>
using namespace std;

int fact(int n)
{
    int factn=1;
    
    for(int i=1;i<=n;i++)
    {
        factn=factn*i;
    }
    return factn;
}

int nCr(int n,int r)
{
    int result=(fact(n))/(fact(r)*fact(n-r));
    return result;
}

int main()
{
    int n,r;
    cout<<"Enter the numbers"<<endl;
    cin>>n>>r;
    cout<<"The nCr is:"<<nCr(n,r)<<endl;
    return 0;
}