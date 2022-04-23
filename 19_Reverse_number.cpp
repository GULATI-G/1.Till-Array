#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int ans=0,rem;
    while(n!=0)
    {
        rem=n%10;
        ans=ans*10+rem;
        n/=10;
    }
    cout<<ans;
    return 0;
}