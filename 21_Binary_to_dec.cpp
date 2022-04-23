#include<iostream>
using namespace std;

int main()
{
    int n,ans=0,p=1,rem;
    cin>>n;
    while(n!=0)
    {rem=n%10;
    ans+=rem*p;
    p*=2;
    n/=10;
    }
    cout<<ans;
    return 0;
}