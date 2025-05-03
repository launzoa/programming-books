#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n = 4, i, j;
    cin >> j;
    for( i = 0; i < j; i++) 
    {
        n = sqrt(n) + pow(2, i);
        n *= n;
    }
    cout << n;
    return 0;
}
