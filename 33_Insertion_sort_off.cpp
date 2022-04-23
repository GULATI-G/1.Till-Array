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
        int temp=arr[i];
        int j=i-1;
        //very very very important that below this line in while condition here not arr[i] but temp
        while(temp<arr[j] && j>=0)
        {
            arr[j+1]=arr[j];
            j--;
        }
        {arr[j+1]=temp;}
    }

    for(int i=0;i<n;i++)
        {
        cout<<arr[i]<<" ";
        }
    
    return 0;
}