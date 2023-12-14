#include <iostream>
using namespace std;

int main()
{
    char X=0;
    cin >>X;
    if (int(X)>=97) cout<<char(X-32) ;
    else cout<<char(X+32) ;
    return 0;
}