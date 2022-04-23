#include<bits/stdc++.h>
using namespace std;
int reverse(int n)
{    int num=0;
    while(n!=0)
    {
        int rem=n%10;
        num=num*10+rem;
        n/=10;
    }
    return num;
}
int binbin(int a,int b)
{
    int pc=0, ans=0;
    while(a>0 && b>0)
    {
        if(a%2==0 && b%2==0)
        {
            {ans=ans*10+pc;
             pc=0;
            }
        }
        else if((a%2==0 && b%2==1) || (a%2==1 && b%2==0))
        {
            if (pc==1){ans=ans*10+0;
                       pc=1;}
            else{ans=ans*10+1;
                 pc=0;}
        }
        else
        {ans=ans*10+pc;
         pc=1;}
        a/=10;
        b/=10;

    }
    
        while(a>0)
        {
            if(a%2==0)
            {ans=ans*10+pc;
             pc=0;}
            else
            {
                if(pc==1)
                {
                    ans=ans*10+0;
                    pc=1;
                }
                else
                {
                    ans=ans*10+1;
                    pc=0;
                }
            }
            a/=10;
        }
        while(b>0)
        {
            if(b%2==0)
            {ans=ans*10+pc;
             pc=0;}
            else
            {
                if(pc==1)
                {
                    ans=ans*10+0;
                    pc=1;
                }
                else
                {
                    ans=ans*10+1;
                    pc=0;
                }
            }
        b/=10;
        }
        if(pc==1)
        {ans=ans*10+1;}
        cout<<reverse(ans);
    return ans;
}
int main()
{
    int a,b;    
    cin>>a>>b;
    binbin(a,b);
    return 0;
}