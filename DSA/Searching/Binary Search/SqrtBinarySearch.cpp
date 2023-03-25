#include<iostream>
using namespace std;

int sqrt(int n)
{
    int start=0;
    int end=n;
    int ans=-1;
    while(start<=end)
    {
        int mid=start + (end-start)/2;
        int square=mid*mid;
        if(square==n)
        {
            return mid;
        }
        else if(square<n)
        {
            ans=mid;
            start=mid+1;
        }
        else
        {
            end=mid-1;
        }
        
    }
    return ans;
}    

int main()
{
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    cout<<"The square root of the number is "<<sqrt(n)<<endl;
    return 0;
}