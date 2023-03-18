#include<iostream>
using namespace std;

int main()
{
    int a,b;
    char choice;
    cout<<"Enter the numbers"<<endl;
    cin>>a>>b;
    cout<<"Enter choice"<<endl;
    cin>>choice;
    switch(choice)
    {
        case '+':cout<<"The sum is:"<<a+b<<endl;
                 break;
        case '-':cout<<"The difference:"<<a-b<<endl;        
                 break;
        case '*':cout<<"The product is:"<<a*b<<endl;
                 break;        
        case '/':cout<<"The quotient is:"<<a/b<<endl;  
                 break;
        case '%':cout<<"The remainder is:"<<a%b<<endl;
                 break;
        default:cout<<"Not a valid operation"<<endl;
    } 
    return 0;             
}