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
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            
            for(int p=i;p<=j;p++)
            {
               cout<<arr[p]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}