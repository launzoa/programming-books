#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    while(n--)
    {
        long long p, r, f;

        cin >> p >> r >> f;

        int cont = 0;
        
        while(p <= f) 
        {
            cont++; 
            p*=r;
        }
        cout << cont << "\n";
    }
    return 0;
}