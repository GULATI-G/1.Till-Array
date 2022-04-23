#include<iostream>
using namespace std;

int main()
{
    char button;
    cout<<"enter the character ";
    cin>>button;
    switch (button)
    {
    case 'a':
        cout<<"hello";
        break;
    case 'b':
        cout<<"hola";
        break;
    case 'c':
        cout<<"salut";
        break;
    case 'd':
        cout<<"bonjour";
        break;
    default:
        cout<<"nahi seekha abhi ye ";
        break;
    }
    
    return 0;
}