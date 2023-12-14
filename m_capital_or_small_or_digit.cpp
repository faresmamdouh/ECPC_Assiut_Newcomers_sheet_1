# include <iostream>
using namespace std;

int main()
{
    char X=0;
    cin >> X;

    if(int(X)<65) cout<<"IS DIGIT";
    else if (int(X)<97) cout<<"ALPHA\nIS CAPITAL";
    else cout<<"ALPHA\nIS SMALL";
    return 0;
}