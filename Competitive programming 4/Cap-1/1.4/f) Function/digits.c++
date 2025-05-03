#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string n;
    cin >> n;
    cin.ignore();

    while(n != "END")
    {   
        int cont = 1, num = 0;

        while( n != "1")
        {
            n = to_string(n.length());
            cont++;
        }
        cout << cont << endl;
        
        cin >> n;
        cin.ignore();
    }
}