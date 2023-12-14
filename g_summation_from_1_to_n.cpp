#include <iostream>
using namespace std;

/*
///method 1

int main()
{
    unsigned long long N=0,sum=0;
    cin >>N;

    for (; N>0; N--)
        sum+=N;
    cout<<sum;

    return 0;
}
*/

int main()
{
    unsigned long long N=0,sum=0;
    cin >>N;

    sum=N/2.0*(N+1);
    cout<<sum;

    return 0;
}