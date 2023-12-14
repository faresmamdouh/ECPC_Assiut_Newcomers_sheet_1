#include <iostream>
using namespace std;

int main()
{
    int A, B, C;
    cin >>A >>B >>C;

    // print minimum value using conditions 
    if(A<=B && A<=C) cout<<A <<" ";
    else if (B<=A && B<=C) cout<<B <<" ";
    else cout<<C <<" ";

    // print maximum value  
    if(A>=B && A>=C) cout<<A ;
    else if (B>=A && B>=C) cout<<B ;
    else cout<<C ;
    return 0;
}