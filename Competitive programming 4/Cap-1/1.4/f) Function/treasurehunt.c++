#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int i, j, l, c;
    cin >> l >> c;

    char m[l][c];

    for(i = 0; i < l; i++)
    {
        for(j = 0; j < c; j++)
        {
            cin >> m[i][j];          
        }
    }

    int a = 0, b = 0, cont = 0;
    
    for(i = 0; 1; i++)
    {
        for(j = 0; 1; j++)
        {
            if(a < 0 || a >= l || b < 0 || b >= c)
            {
                cout << "Out";
                return 0;
            }
            if(cont >= l*c) 
            {
                cout << "Lost";
                return 0;
            }

            char op = m[a][b];
            
            switch(op)
            {
                case 'N':
                    a-=1;
                break;

                case 'S':
                    a+=1;
                break;

                case 'W':
                    b-=1;
                break;

                case 'E':
                    b+=1;
                break;

                case 'T':
                    cout << cont;
                    return 0;
                break;

                default:
                break;
            }
            cont++;
        }
    }

    
    return 0;
}