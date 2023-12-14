#include <iostream>
using namespace std;

int main()
{
    unsigned  int a=0, b=0, c=0, d=0;
    cin >>a >>b >>c>>d;

    //Reduce data size
    a=a%100;
    b=b%100;
    c=c%100;
    d=d%100;

    a=a*b*c*d;
    a=a%100;     // assign the last two digit of a*b*c*d to a 
    
    if (a<10) cout<<0 ;
    cout <<a;

    // cout <<((a>10)?a%100 :  0 << a%100);
    return 0;
}
