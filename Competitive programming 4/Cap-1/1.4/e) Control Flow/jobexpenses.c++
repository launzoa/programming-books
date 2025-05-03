#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, despesas = 0;

    cin >> n;

    while( n != 0)
    {
        int x;
        cin >> x;

        if(x < 0) despesas += x;
        n--;
    }
    cout << despesas*-1;
    return 0;
}