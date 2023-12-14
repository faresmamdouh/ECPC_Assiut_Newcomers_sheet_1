#include <iostream>
#include <cmath>
using namespace std;

// // method 1 
// int main()
// {
//     unsigned long long a=0, b=0, c=0, d=0;
//     cin >>a >>b >>c >>d;
//     cout <<((pow(a,b) > pow(c,d))? "YES" : "NO");
//     return 0;
// }

int main(){
    unsigned long long a=0, b=0, c=0, d=0;
    cin >>a >>b >>c >>d;
    cout <<((b*log(a) > d*log(c))? "YES" : "NO");
    return 0;
}
