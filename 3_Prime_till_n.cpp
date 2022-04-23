#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int n;
    cout<<"enter number ";
    cin>>n;
    for(int i=2;i<=n;i++)
    {
        bool flag=0;
        for(int j=2;j<=sqrt(i);j++)
        {
            if(i%j==0)
            {flag=1;
            break;}
        }
        if(flag==0){cout<<i;}
    }
    return 0;
}