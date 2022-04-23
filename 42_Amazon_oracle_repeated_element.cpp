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

    int ar[n];
    int midx=INT_MAX;
    for(int i=0;i<n;i++)
    {
        ar[i]=-1;
    }
    for(int i=0;i<n;i++)
    {
        if(ar[arr[i]]==-1)
        {ar[arr[i]]=i;}
        else{midx=min(midx,ar[arr[i]]);}
    }

    if(midx==INT_MAX){cout<<"-1";}
    cout<<(midx+1);
    return 0;
}