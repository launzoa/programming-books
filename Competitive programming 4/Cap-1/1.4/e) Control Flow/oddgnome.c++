#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m, i, j, k;

    cin >> n;

    for(j = 0; j < n; j++)
    {
        cin >> m;
        int x[m];
        for(i = 0; i < m; i++) cin >> x[i];
        for (k = 0; k < m; k++)
        {
            if(k != 0 && k != m-1 && x[k] != x[k-1]+1 && x[k] != x[k+1]-1) cout << k+1 << endl;
        }
        
    }

    return 0;
}