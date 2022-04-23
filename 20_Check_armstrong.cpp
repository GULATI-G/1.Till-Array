#include<iostream>
#include<math.h>
using namespace std;

int power(int m, int n)
{
    int ans=1;
    while(n!=0)
    {ans*=m;
        n--;}
    return ans;
}
/*As pow default function of c++ doesn't work well but in online compilier it does. So i have created own func.*/
int main()
{
    int n,temp;
    cin>>n;
    temp=n;
    int ans=0,rem;
    while(n!=0)
    {
        rem=n%10;
        //ans=ans+rem*rem*rem;
        ans+=power(rem,3);
        n/=10;
    }
    if(ans==temp){cout<<"armstrong";}
    else{cout<<"not armstrong";}
    return 0;
}