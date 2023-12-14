#include <iostream>
using namespace std;

int main()
{
    int l1=0, r1=0, l2=0, r2=0;
    cin >>l1 >>r1 >>l2 >>r2;

    /* 
    There is an intersection if: 
     == l2<=r1 && l2>l1 ==   //case 1
        -ex(1 15 , 5 27) The beginning of the second interval is less than the end of the first interval and greter than its starts
    -------------------------------------------------------------------------------------------------------------------------------
     == l1<=r2 && l1>l2 ==  //case 2
     -ex(5 27 , 1 15) The beginning of the first interval is less than the end of the second interval and greter than its starts
    */
    
    if ( l2<=r1&&l2>=l1 || l1<=r2&&l1>=l2 ) //There is an intersection
    {
        cout <<((l1>l2)? l1 : l2);
        cout <<" ";
        cout <<((r2<r1)? r2 : r1);
    }

    else  //There is NO intersection 
        cout<<-1;
    return 0;
}