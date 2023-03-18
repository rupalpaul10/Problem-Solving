#include<iostream>
using namespace std;

int main()
{
    int money;
    char choice;
    cout<<"Enter the amount of money"<<endl;
    cin>>money;
    while(money>=10)
    {
        if(money>=100)
        {
            choice='H';
            //money=money%100;
        }
        else if(money>=50)
        {
            choice='F';
            //money=money%50;
        }
        else if(money>=20)
        {
            choice='T';
            //money=money%20;
        }
        else if(money>=10)
        {
            choice='1';
            //money=money%10;
        }
        switch (choice)
        {
        case 'H':
            {
                int n=money/100;
                cout<<"No. of 100 rupee note:"<<n<<endl;
                money=money-n*100;
                break;
            }
        case 'F':
            {
                int m=money/50;
                cout<<"No. of 50 rupee note:"<<m<<endl;    
                money=money-m*50;
                break;
            }
        case 'T':
            {
                int u=money/20;
                cout<<"No. of 20 rupee note:"<<u<<endl;    
                money=money-u*20;
                break;
            }
        case '1':
            {
                int p=money/10;
                cout<<"No. of 10 rupee note:"<<p<<endl;    
                money=money-p*10;
                break;
            }      
        default:
            {
                cout<<"Thank you for the service"<<endl;
                break;
            }
        }
    }
    return 0;
}
  