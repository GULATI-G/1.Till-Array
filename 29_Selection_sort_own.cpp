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
        int min=arr[i];
        int el=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<min)
            {min=arr[j];
            el=j;}
        }
        int temp=arr[i];
        arr[i]=arr[el];
        arr[el]=temp;
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}