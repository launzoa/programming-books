#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int i, n1, n2, n3;
    
    cin >> i >> n1 >> n2 >> n3;

    while(i + n1 + n2 + n3 != 0)
    {
        int total = 80;

        int tmp = i - n1;
        if(tmp < 0) tmp += 40;
        total += tmp;

        tmp = n2 - n1;
        if (tmp < 0) tmp += 40;
        total += tmp + 40;
        
        tmp = n2 - n3;
        if (tmp < 0) tmp += 40;
        total += tmp;
        
        cout << total * 9 << endl;
        cin >> i >> n1 >> n2 >> n3;

    }
    return 0;
}