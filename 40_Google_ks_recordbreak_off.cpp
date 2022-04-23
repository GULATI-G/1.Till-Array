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
    int rb=0;
    if(arr[0]>arr[1])
    {
        rb++;
    }
    for(int i=0;i<=n;i++)
    {
        if(i==n)
        {
            rb++;
        }
        else if(arr[i]<arr[n-1])
        {continue;}
        else{break;}
    }
    int mx=arr[0];
    for(int i=1;i<=n-2;i++)
    {
        mx=max(mx,arr[i-1]);
        if((arr[i]>arr[i+1]) && arr[i]>mx)
        {rb++;}
    }
    cout<<rb;

    return 0;
}
