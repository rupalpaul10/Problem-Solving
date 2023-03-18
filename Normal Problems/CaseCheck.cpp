#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter a character"<<endl;
    cin>>ch;
    if((int)ch>=48 && (int)ch<=57)
    {
        cout<<"The character is Numeric"<<endl;
    }
    else 
    {
        if((int)ch>=97 && (int)ch<=122)
        {
            cout<<"The character is in Lowercase"<<endl;
        }
        else if((int)ch>=65 && (int)ch<=90)
        {
            cout<<"The character is in uppercase"<<endl;
        }
    }
    return 0;

}