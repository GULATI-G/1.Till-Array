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
    int l=2;
    for(int i=0;i<n;i++)
    {      
        int dif,temp=2;
        dif=arr[i+1]-arr[i];
        int next=(i+2);
        while(dif==(arr[next]-arr[next-1]))
        {
            next++;
            temp++;
        }
        l=max(l,temp);
        arr[i]=l;
    }
    cout<<l;
    return 0;
}