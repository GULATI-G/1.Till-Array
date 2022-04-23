#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int p=1;
    for(int j=1;j<=n;j++)
    {
        for(int i=1;i<=j;i++)
        {cout<<p++;}
        cout<<endl;
    }
    return 0;
}