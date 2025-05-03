#include <iostream>

using namespace std;

int main()
{
    int n,a,b,c;

    cin >> n;

    while(n!=0)
    {   
        cin >> a >> b >> c;

        if(a + b == c || a - b == c || a * b == c || double(a)/b == c || b - a == c || double(b)/a == c) cout << "Possible";
        else cout << "Impossible";
        cout << endl;
        n--;
    }

    return 0;
}