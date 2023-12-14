#include <iostream>
using namespace std;

int main()
{
    int A, B, C;
    cin >>A >>B >>C;

// ***  Print these numbers in ascending order *** //     
    if(A<=B && A<=C){
        cout <<A                        <<"\n";
        if (B<C) cout <<B <<"\n" <<C    <<"\n";
        else cout <<C <<"\n" <<B        <<"\n";
    } 

    else if (B<=A && B<=C){
        cout<<B                         <<"\n";
        if (A<C) cout <<A <<"\n" <<C    <<"\n";
        else cout <<C  <<"\n" <<A       <<"\n";
    }

    else {
        cout<<C                         <<"\n";
        if (A<B) cout <<A <<"\n" <<B    <<"\n";
        else cout<<B <<"\n" <<A         <<"\n";
    }

// *** blank line ***//
cout                                    <<"\n";

// *** values in the sequence as they were read *** //
cout <<A <<"\n" <<B <<"\n" <<C          <<"\n";

    return 0;
}