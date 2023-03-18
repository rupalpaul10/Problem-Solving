#include<iostream>
using namespace std;

bool checknum(int num)
{
    if(num%2==0)
    {
        return true;
    }
    else
    {
        return false;
    }
} 

int main()
{
    int num;
    cout<<"Enter the number"<<endl;
    cin>>num;
    if(checknum(num))
    {
        cout<<"The num is even"<<endl;
    }
    else
    {
        cout<<"The num is odd"<<endl;
    }
    return 0;
}