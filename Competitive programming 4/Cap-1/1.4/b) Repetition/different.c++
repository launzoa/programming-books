#include <iostream>
using namespace std;

int main()
{
    long long int n1, n2, r;
    
    while(cin >> n1 >> n2)
    {
        r = n1 - n2;
        if(r < 0) cout << -r << endl;
        else cout << r << endl;
    }

    return 0;
}