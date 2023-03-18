#include<iostream>
using namespace std;

int reverse(int x) {
        int rev=0;
        while(x!=0)
        {
            int r=x%10;
            if(rev>INT32_MAX/10 || rev<INT32_MIN/10)
            {
                return 0;
            }
            rev=rev*10+r;
            x/=10;
        }
        return rev;
}

int main()
{
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    cout<<"The reverse number is:"<<reverse(n)<<endl;
    return 0;
}