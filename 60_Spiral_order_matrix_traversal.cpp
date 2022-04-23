#include<iostream>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {   cin>>arr[i][j];}
    }
    int rs=0,re=n-1,cs=0,ce=m-1;
while (rs<=re && cs<=ce)
{
    for(int c=cs;c<=ce;c++)
    {cout<<arr[cs][c]<<" ";}
    rs++;
    for(int r=rs;r<=re;r++)
    {cout<<arr[r][ce]<<" ";}
    ce--;
    for(int c=ce;c>=cs;c--)
    {cout<<arr[re][c]<<" ";}
    re--;
    for(int r=re;r>=rs;r--)
    {cout<<arr[r][cs]<<" ";}
    cs++;
}

    // for(int i=0;i<n;i++)
    // {
    //     for(int j=0;j<m;j++)
    //     {
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    // int r1=m,ri=0;
    // int rl=0,rli=m-2;
    // int c1=1,c1i=n-2;
    // int cl=n,ci=1;
    //if n is even

    // for(int i=1;i<=(n/2);i++)
    // {
    //     for(int j=ri;j<r1;j++)
    //     {cout<<arr[i-1][j]<<endl;
    //     }
    //     ri++;
    //     r1--;
    //     for(int j=ci;j<cl;j++)
    //     {cout<<arr[j][m-i]<<endl;}
    //     cl--;
    //     ci++;
    //     for(int j=rli;j>=rl;j--)
    //     {cout<<arr[n-i][j]<<endl;}
    //     rl++;
    //     rli--;
    //     for(int j=c1i;j>=c1;j--)
    //     {cout<<arr[j][i-1]<<endl;}
    //     c1i--;
    //     c1++;
    // }
//if n is odd then i will run from 1 to n/2 +1


    return 0;
}