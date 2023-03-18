#include<iostream>
using namespace std;
int main()
{
    int n,count=0;
    cout<<"Enter a number"<<endl;
    cin>>n;
    int i=1;
    while(i<=n)
    {
        if(n%i==0)
        {
            count+=1;
            i+=1;
        }
        else
        {
            i+=1;
        }
    }
    if(count==2)
    {
        cout<<"The Number is prime"<<endl;
    }
    else
    {
        cout<<"The Number is not prime"<<endl;
    }
    return 0;
}
