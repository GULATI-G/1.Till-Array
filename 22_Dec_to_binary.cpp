#include<iostream>
using namespace std;

int main()
{
    int n,ans=0,p=1,rem;
    cin>>n;
    while(n!=0)
    {   rem=n%2;
        ans+=rem*p;
        p*=10;
        n/=2;}
        cout<<ans;
    return 0;
}