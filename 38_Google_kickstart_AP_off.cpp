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
    int j=2;
    int mx=2;
    int count=2;
    int pd=arr[1]-arr[0];
    while(j<n)
    {      if(pd==arr[j]-arr[j-1])
           {

               count++;
           }
           else{
               pd=arr[j]-arr[j-1];
               count=2;
           }
           mx=max(mx,count);
           j++;
            
    }
    cout<<mx;
    
    return 0;
}