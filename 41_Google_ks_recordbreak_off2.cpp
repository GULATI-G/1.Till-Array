#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"enter n ";
    cin>>n;
    int arr[n+1];
    arr[n]=-1;

    for(int i=0;i<n;i++)
    {
        cout<<"enter value for arr "<<i<<" ";
        cin>>arr[i];
    }
    if(n==1){cout<<"1";
            return 0;}   
    int rb=0;
    int mx=-1;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]>mx && arr[i]>arr[i+1])
        {
            rb++;
        }
        mx=max(mx,arr[i]);
    }
    cout<<rb;
    
    

    return 0;
}

