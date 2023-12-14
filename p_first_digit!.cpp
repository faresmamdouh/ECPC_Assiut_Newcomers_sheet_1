#include <iostream>
using namespace std;

int main()
{
    int X=0;
    cin >>X;

    X-=X%1000;      //.: (999 < X  ≤  9999)
    X/=1000; 
    if (X%2==0) cout <<"EVEN";
    else cout<<"ODD";
    return 0;
}