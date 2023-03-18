#include<iostream>
using namespace std;

bool isprime(int i)
{
    for(int j=2;j<i;j++)
    {
        if(i%j==0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int n;
    cout<<"Enter the range of prime numbers"<<endl;
    cin>>n;
    int i,j,count=0;
    for(i=1;i<=n;i++)
    {
        if(isprime(i))
        {
            cout<<i<<" ";
        }
    }
    return 0;    
}    