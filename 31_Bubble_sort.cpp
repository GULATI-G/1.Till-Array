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
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(int i=0;i<n;i++)
        {
        cout<<arr[i]<<" ";
        }
    
    return 0;
}