#include <iostream>

using namespace std;

int main()
{
    int n, r, e ,c;

    cin >> n;

    while(n != 0)
    {

        cin >> r >> e >> c;
        if(r+c > e) cout << "do not advertise";
        else if(r+c < e) cout << "advertise";
        else cout << "does not matter";
        
        cout << endl;
        n--;
    }

    return 0;
}