#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, i, x, y;

    while (1)
    {
        int per = 0, total = 0;
        cin >> n;
        if(n == -1) break;
        for(i = 0; i < n; i++)
        {
            cin >> x >> y;

            total += (y - per) * x;
            per = y;
        }

        cout << total << " miles" << endl;

    }
    return 0;
}