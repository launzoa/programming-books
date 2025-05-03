#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double x;

    cin >> x;
    double paces = round(x * 1000 * 5280/4854);
    long result = static_cast<long>(round(paces));
    
    cout << result;
    return 0;
}