#include <iostream>
using namespace std;

int main()
{
    int a,b,c,n;

    cin >> a >> b >> c >> n;

    if(n >= 3 && a >= 1 && b >= 1 && c >= 1 && (a+b+c) >= n) cout << "YES"; 
    else cout << "NO";
    
    return 0;
}