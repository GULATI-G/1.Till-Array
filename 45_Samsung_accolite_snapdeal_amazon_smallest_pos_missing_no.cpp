#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"enter n ";
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Enter for index "<<i<<" ";
        cin>>arr[i];
    }
    int N=1e6 + 1;
    bool ar[N]; //to reduce time complexity used bool instead of int//
    for(int i=0;i<N;i++)
    {
        ar[i]=0;
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]>=0)
        {ar[arr[i]]=1;}
    }
    for(int i=1;i<N;i++)
    {
        if(ar[i]==0)
        {cout<<i;
         return 0;
        }
    }
    cout<<"-1";
    return 0;
}