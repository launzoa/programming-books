#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int abc[3], i;
    string order;

    for(i = 0; i < 3; i++) cin >> abc[i];
    cin >> order;

    int maior = abc[0], idx = 0;
    for(i = 1; i < 3; i++) if(abc[i] > maior)
    {
        maior = abc[i];
        idx = i;
    }
    abc[idx] = abc[2];
    abc[2] = maior;

    if(abc[0] > abc[1])
    {
        maior = abc[0];
        abc[0] = abc[1];
        abc[1] = maior;
    } 
    
    for(char o : order)
    {
        switch(o)
        {
            case 'A':
                cout << abc[0] << " ";
            break;

            case 'B':
                cout << abc[1] << " ";
            break;

            default:
                cout << abc[2] << " ";
            break;
        }   
    }

    return 0;
}