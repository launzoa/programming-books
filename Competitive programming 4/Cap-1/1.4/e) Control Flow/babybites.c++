#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, i, key = 1;
    string x;
    cin >> n;

    for(i = 1; i <= n; i++)
    {
        cin >> x;
    
        if(x != "mumble" && stoi(x) != i) key = 0;
    }

    if(key == 1) cout << "makes sense";
    else cout << "something is fishy";

    return 0;
}