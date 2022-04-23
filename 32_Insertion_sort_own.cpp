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
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(arr[i]<arr[j])
            {
                int temp=arr[i];
                for(int p=i-1;p>=j;p--)
                {
                    arr[p+1]=arr[p];
                }
                arr[j]=temp;
                break;
            }
        }
    }

    for(int i=0;i<n;i++)
        {
        cout<<arr[i]<<" ";
        }
    
    return 0;
}