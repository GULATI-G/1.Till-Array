#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int n;
    bool flag=0;
    cout<<"enter number ";
    cin>>n;
    for(int i=2;i<=sqrt(n);i++)
    {if(n%i==0)
    {flag=1;
        break;}
    }
    if(flag==0){cout<<"prime";}
    else{cout<<"non prime";}
    return 0;
}