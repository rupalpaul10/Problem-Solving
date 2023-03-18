#include<iostream>
using namespace std;

int main()
{
    int n,product=1,sum=0;
    cout<<"Enter the number"<<endl;
    cin>>n;
    while(n!=0)
    {
        int r=n%10;
        n=n/10;
        product=product*r;
        sum=sum+r;
    }
    cout<<product-sum<<endl;
    return 0;
}