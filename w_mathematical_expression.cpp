#include <iostream>
using namespace std;

int main()
{
    int a=0, b=0, c=0;
    char s=' ', q=' ';
    cin>>a >>s >>b >>q >>c;
    
    switch (s)
    {
    case '+': 
        if (a+b==c) cout<<"Yes\n";
        else cout<<a+b <<"\n";
        break;

 case '-': 
        if (a-b==c) cout<<"Yes\n";
        else cout<<a-b <<"\n";
        break;

    default:
        if (a*b==c) cout<<"Yes\n";
        else cout<<a*b <<"\n";
        break;
    }
    return 0;
}