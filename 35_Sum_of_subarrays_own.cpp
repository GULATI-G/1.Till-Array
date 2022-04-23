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
    
    //sum of all subarrays
    for(int i=1;i<=n;i++)
    {
        int count=0;
        for(int p=1;p<=n-i+1;p++)
        {
            int sum=0;
            count=p-1;
            for(int j=1;j<=i;j++)
            {
                sum=sum+arr[count];
                count++;  
            }
            cout<<sum<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}