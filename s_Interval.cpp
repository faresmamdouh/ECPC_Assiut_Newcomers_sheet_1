#include <iostream>
using namespace std;

int main()
{
    double x=0;
    cin >>x;
    
    if(x>100 || x<0) cout<<"Out of Intervals";

    else{
        if      (x<=25) cout<<"Interval [0,25]";
        else if (x<=50) cout<<"Interval (25,50]";
        else if (x<=75) cout<<"Interval (50,75]";
        else            cout<<"Interval (75,100]";

    }
    return 0;
}