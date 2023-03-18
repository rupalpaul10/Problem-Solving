#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter rows X column"<<endl;
    cin>>n;
    int i=1;
    int count=65;
    while(i<=n)
    {
        int j=1;
        while(j<=i)
        {
            cout<<char(count);
            j+=1;
            
        }
        cout<<endl;
        count+=1;
        i+=1;
        
    }
    return 0;
}