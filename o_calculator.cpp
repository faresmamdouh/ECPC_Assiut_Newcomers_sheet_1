#include <iostream>
using namespace std;

int main()
{
    int A=0,B=0;
    char S=0;

    cin >>A >>S >>B;
    switch (S)
    {
    case '+':
        cout <<A+B;
        break;

    case '-':
        cout <<A-B;
        break;

    case '*':
        cout <<A*B;
        break;

    default:
        cout <<A/B;
        break;
    }
    
    return 0;
}