#include<iostream>
using namespace std;

int main()
{
    int n,count=1;
    cout<<"Enter rows X column"<<endl;
    cin>>n;
    int i=1;
    while(i<=n)
    {
        int j=1;
        while(j<=n)
        {
            
            cout<<count;
            count+=1;
            j+=1;
        }
        cout<<endl;
        i+=1; 
    }
    return 0;
}