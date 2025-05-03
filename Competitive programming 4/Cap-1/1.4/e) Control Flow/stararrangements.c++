#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, i, j;
    cin >> n;
    cout << n << ":" << endl;
    for(i = 2; i <= (n+1) / 2; i++)
    {
        j = i + (i - 1);
        if(n % j == 0 || n % j == i) cout << i << "," << i-1 << endl;
        
        if(n % i == 0) cout << i << "," << i << endl;

    }

    return 0;
}