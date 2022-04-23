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
    int sum=INT_MIN;
    
    for(int i=0;i<n;i++)
    {   
        for(int j=i;j<n;j++)
        {   int curr=0;
            for(int p=i;p<=j;p++)
            {
                curr+=arr[p];
            }
            sum=max(sum,curr);
        }
    }
    cout<<sum;
    return 0;
}