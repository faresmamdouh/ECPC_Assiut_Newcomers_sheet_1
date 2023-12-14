#include<iostream>
using namespace std;

int main()
{
    double n=0;
    int int_n=0;
    cin>>n;

    int_n=n;

    if(n-int_n==0) cout<<"int " <<int_n <<"\n";
    else cout<<"float " <<int_n <<" " <<(n-int_n) <<"\n";
    return 0;
}