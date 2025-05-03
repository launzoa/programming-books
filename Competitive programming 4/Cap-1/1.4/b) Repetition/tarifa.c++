#include <iostream>
using namespace std;

int main()
{

    int x, n, p;

    cin >> x;
    cin >> n;
    
    int total = x;
    while(n != 0)
    {
        cin >> p;
        total += x-p;
        n--;
    }
    
    cout << total << endl;
    return 0;
}