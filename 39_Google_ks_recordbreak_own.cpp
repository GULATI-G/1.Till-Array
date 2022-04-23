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
    for(int i=1;i<=n-2;i++)
    {
        int flag=0;
        for(int j=0;j<i;j++)
        {
            if(arr[j]<arr[i]){continue;}
            else{flag=1;
                 break;}
        }
        if(flag==0 && arr[i+1]<arr[i])
        {rb++;}
    }
    cout<<rb;

    return 0;
}
