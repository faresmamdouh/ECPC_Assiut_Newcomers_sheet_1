#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double r=0,pi=0, area=0;
    cin >>r;
    pi=3.141592653;
    area= pi*r*r ;
    cout << fixed << setprecision(9) <<area;
    return 0;
}