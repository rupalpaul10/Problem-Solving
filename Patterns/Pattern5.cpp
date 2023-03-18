#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter rows X columns"<<endl;
    cin>>n;
    int i=1;
    while(i<=n)
    {
        int j=1;
        int count=i;
        while(j<=i)
        {
            cout<<count;
            j+=1;
            count-=1;
        }
        cout<<endl;
        i+=1;
    }
    return 0;
}
            
            
           