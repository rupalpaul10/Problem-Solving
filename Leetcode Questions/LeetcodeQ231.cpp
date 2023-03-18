#include<iostream>
#include<math.h>
using namespace std;

bool ispower(int n)
{
    for(int i=0;i<=30;i++)//-2^31<range<2^31(integer range)
    {
        if(pow(2,i)==n)
        {
            return true;
            break;
        }
    }
    return false;
}
int main()
{
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    if(ispower(n))
    {
        cout<<"true"<<endl;
    }
    else
    {
        cout<<"false"<<endl;
    }
    return 0;
}