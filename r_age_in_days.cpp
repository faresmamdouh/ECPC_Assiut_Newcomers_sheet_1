#include <iostream>
using namespace std;

int main()
{
    int n=0,y=0,m=0;
    cin >>n;

    y=n/365;
    n-=365*y;

    m=n/30;
    n-=m*30;

    cout<<y <<" years\n" <<m <<" months\n" <<n <<" days";
    return 0;
}