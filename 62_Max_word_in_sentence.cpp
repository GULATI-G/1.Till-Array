#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    cin.ignore();
    char arr[n+1];
    cin.getline(arr,n+1);
    // cout<<arr;
    cin.ignore();
    int lt;
    int i=0,cur=0,ans=0;
    while(arr[i]!='\0')
    {
        if(arr[i]!=' ')
        {cur++;}
        else{cur=0;}
        if(ans<cur)
        {ans=max(ans,cur);
        lt=i;}
        i++;
    }
    for(int j=ans;j>=1;j--)
    {cout<<arr[lt-j+1];}
    cout<<ans;
    return 0;
}