#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int p,a,b,c,d,n;
    cin >> p >> a >> b >> c >> d >> n;
    double preco, max_preco = 0, max_declinio = 0, declinio = 0;

    for(int i = 1; i <= n; i ++) 
     {
        preco= p * (sin(a*i + b) + cos(c*i + d) + 2);
        if(i ==  1) max_preco = preco;
        else
        {
            if(preco > max_preco) max_preco = preco;
            else
            {
                declinio = max_preco - preco;
                if(declinio > max_declinio) max_declinio = declinio;
            }
        }
    }
    cout << max_declinio;
    return 0;
}