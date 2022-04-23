#include<iostream>
using namespace std;

void fib(int n)
{
    int a=0,b=1,next_term;

    while (n!=0)
    {
        cout<<a;
        next_term=a+b;
        a=b;
        b=next_term;
        n--;
    }
    return;
}

int main()
{
    int n;
    cin>>n;
    fib(n);
    return 0;
}