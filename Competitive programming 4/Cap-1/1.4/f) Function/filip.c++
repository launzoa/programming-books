#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string a, b, n_a = "", n_b = "";

    cin >> a >> b;

    for(int i = a.length()-1; i >= 0; i--) n_a += a[i];
    for(int i = b.length()-1; i >= 0; i--) n_b += b[i];
    
    if(n_a > n_b) cout << n_a;
    else cout << n_b;
    
    return 0;
}