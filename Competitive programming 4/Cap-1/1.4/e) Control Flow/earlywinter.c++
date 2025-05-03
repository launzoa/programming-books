#include <iostream>

using namespace std;

int main()
{

    int n, k;

    cin >> n >> k;

    for(int i = 0 ; i < n; i++)
    {
        int x;
        cin >> x;
        if(x <= k)
        {
            cout << "It hadn't snowed this early in " << i << " years!";
            return 0;
        }
    }
    cout << "It had never snowed this early!";

    return 0;
}