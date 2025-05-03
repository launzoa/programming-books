#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, i = 0;
    cin >> n;
    int a[n];
    
    for(i = 0; i < n; i++) cin >> a[i];
    
    i = 0;
    int resul = max(a[i], a[i+2]), idx = 1;
    for(i = 1; i < n-2; i++)
    {
        if(max(a[i], a[i+2]) < resul)
        {
            resul = max(a[i], a[i+2]);
            idx = i+1;
        } 
    }

    cout << idx << " " << resul;

    return 0;
}