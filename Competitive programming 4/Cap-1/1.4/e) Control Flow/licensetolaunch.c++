#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n, j;
    cin >> n;
    int menor =  1000001;
    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if(x < menor) 
        {
            menor = x;
            j = i;
        }
    }

    cout << j;
    return 0;
}