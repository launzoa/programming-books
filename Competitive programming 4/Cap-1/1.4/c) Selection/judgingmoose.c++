#include <iostream>
using namespace std;

int main()
{
    int l,r;

    cin >> l >> r;

    if(l == 0 && r == 0) 
    {
        cout << "Not a moose";
    }
    else if(l == r)
    {
        cout << "Even " << l+r;
    }
    else
    {
        if(l > r) cout << "Odd " << l*2; 
        else cout << "Odd " << r*2; 
    }

    return 0;
}