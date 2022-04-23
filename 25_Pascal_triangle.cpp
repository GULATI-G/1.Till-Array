#include<iostream>
using namespace std;
int fact(int n)
{
    int ans=1;
    while(n!=0)
    {ans*=n--;}
    return ans;
}
void pascal(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            int ans=(fact(i)/(fact(j)*fact(i-j)));
            cout<<ans<<" ";
        }
        cout<<endl;
    }
    return;
}

int main()
{
    int n;
    cin>>n;
    pascal(n);
    return 0;
}