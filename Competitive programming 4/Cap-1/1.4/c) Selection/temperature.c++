#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;
    if (x == 0 && y == 1) cout << "ALL GOOD";
    else if (y == 1) cout << "IMPOSSIBLE";
    else cout << setprecision(7) << x/(1.0-y);
    return 0;
}