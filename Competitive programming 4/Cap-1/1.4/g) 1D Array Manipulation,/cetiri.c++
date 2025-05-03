#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, i, b[3], idx, menor = 101;
    for(i = 0; i < 3; i++)
    {
        cin >> a;
        if(a < menor)
        {
            menor = a;
            idx = i;
        }
        b[i] = a;
    }

    b[idx] = b[0];
    b[0] = menor;

    if(b[1] > b[2])
    {
        menor = b[2];
        b[2] = b[1];
        b[1] = menor; 
    }

    int d1 = b[1] - b[0];
    int d2 = b[2] - b[1];
        
    if(d1 == d2) cout << b[2] + d1; 
    else if(d1 > d2) cout << b[0] + d2;
    else cout << b[1] + d1;
    


    return 0;
}