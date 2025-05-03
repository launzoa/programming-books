#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, cont = 0;
    string x, valor;

    cin >> n;
    cin.ignore();

    getline(cin, x);
    x += ' ';
    for(char c : x) 
    {
        if(c != ' ') valor += c;
        else
        {
            if(stoi(valor) < 0) cont++;
            valor.clear(); 
        }
    }
    cout << cont;
    return 0;
}