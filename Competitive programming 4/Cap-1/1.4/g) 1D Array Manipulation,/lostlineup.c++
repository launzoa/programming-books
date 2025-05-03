#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, j, i;

    cin >> n;
    int a[n-1], cont = 0, b [n-1];

    for(i = 0; i < n-1; i++) cin >> a[i];

    for(j = 0; j < n-1; j++)
    {
        for(i = 0; i < n-1; i++) 
        {
            if(a[i] == cont)
            {
                b[cont++] = i+2;
            }
        }
    }


    cout << 1 << " ";

    for(int c : b) cout << c << " ";
    return 0;
}

    