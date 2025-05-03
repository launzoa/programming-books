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
        int x = 1   , ante = 0, total = 0;;
        
        while(x != 0)
        {
            cin >> x;
            if(ante != 00 && x > ante*2) total += x - ante*2; 
            ante = x;
        }        
        cout << total << "\n";
    }
    return 0;
}