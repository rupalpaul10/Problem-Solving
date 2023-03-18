#include<iostream>
using namespace std;

int power(int base,int exp)
{
    int i;
    int result=1;
    for(i=1;i<=exp;i++)
    {
        result=result*base;
    }
    return result;
}

int main()
{
    int base,exp;
    cout<<"Enter the base and exponent"<<endl;
    cin>>base>>exp;
    cout<<base<<" to the power "<<exp<<" is "<<power(base,exp)<<endl;
    return 0;
}
 