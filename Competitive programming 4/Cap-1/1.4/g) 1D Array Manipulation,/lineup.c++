#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, i, cont = 0;
    cin >> n;
    vector <string> nome(n);

    for(i = 0; i < n; i++) cin >> nome[i];
    
    string pre = nome[0];
    for(i = 1; i < n; i++)
    {

        if(nome[i] > pre) 
        {
            if(cont == 0 || cont == 1) cont = 1;
            else cont = -1;
        }
        else
        {            
            if(cont == 0 || cont == 2) cont = 2;
            else cont = -1;
        }
        pre = nome[i];
    }

    switch(cont)
    {
        case 1:
            cout << "INCREASING";
        break;

        case 2: 
            cout << "DECREASING";
        break;

        default:
            cout << "NEITHER";
            break;
    }

    return 0;
}