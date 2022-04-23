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
    int sumr;
    cout<<"enter sum you want ";
    cin>>sumr;
    int sum=0,p=0;
    for(int i=0;i<n;i++)
    {
        if((arr[i]+sum)<sumr)
        {sum+=arr[i];}
        else if((arr[i]+sum)>sumr)
        {sum=sum-arr[p];
         p++;
            while((arr[i]+sum)>sumr)
                 {sum=sum-arr[p];
                 p++;}
            if((arr[i]+sum)==sumr)
            {cout<<p+1<<" and "<<i+1;
            break;}
            else if((arr[i]+sum)<sumr)
            {sum+=arr[i];}
        }
        else
         {cout<<p+1<<" and "<<i+1;
         break;}
    }
    return 0;
}