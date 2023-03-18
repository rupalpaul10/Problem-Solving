#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    uint32_t n;
    int r,i=0;
    int decimal=0;
    cout<<"Enter the binary number"<<endl;
    cin>>n;
    while(n!=0)
    {
        r=n%10;
        decimal+=pow(2,i)*r;
        i+=1;
        n=n/10;
    }
    cout<<decimal<<endl;
    return 0;
}