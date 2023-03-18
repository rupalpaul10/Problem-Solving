#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    int rev=0;
    while(n!=0)
    {
        int r=n%10;
        if(rev>INT32_MAX/10 || rev<INT32_MIN/10)
        {
            cout<<"Range Exceeded"<<endl;
        }
        rev=rev*10+r;
        n/=10;
    }
    cout<<"The reverse number is:"<<rev<<endl;
    return 0;
}