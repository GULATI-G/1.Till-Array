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
        cout<<"enter value for arr "<<i<<" ";
        cin>>arr[i];
    }    
    int mx=arr[0];
    for(int i=0;i<n;i++)
    {
        mx=max(mx, arr[i]);
        cout<<mx<<" ";
    }

    /*for(int i=0;i<n;i++)
        {
        cout<<arr[i]<<" ";
        }*/
    
    return 0;
}