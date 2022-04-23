#include<iostream>
using namespace std;

int fact(int n){
    int ans=1;
    while(n!=0){ans*=n--;}
    return ans;
}

int main()
{
    int n,r;
    cin>>n>>r;
    int ans = (fact(n)/(fact(r)*fact(n-r)));
    cout<<ans;
    return 0;
}