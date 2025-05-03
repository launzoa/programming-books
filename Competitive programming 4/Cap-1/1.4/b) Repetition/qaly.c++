#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n;
    double q, y, qy = 0;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> q >> y;

        qy += q*y;
    }
    cout << fixed << setprecision(3);
    cout << qy << endl;

    return 0;
}