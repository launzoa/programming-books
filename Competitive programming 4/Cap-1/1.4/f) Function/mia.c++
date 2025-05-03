#include <bits/stdc++.h>

using namespace std;

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int s1, s2, r1, r2;

    while(1)
    {
        cin >> s1 >> s2 >> r1 >> r2;
        if(s1 == 0 && s2 == 0 && r1 == 0 && r2 == 0) break;
        if(s1 + s2 == 3)
        {
            if(r1 + r2 == 3) cout << "Tie.";
            else cout << "Player 1 wins.";
        }
        else if(r1 + r2 == 3) cout << "Player 2 wins.";
        else if(s1 == s2)
        {
            if(r1 == r2)
            {
                if(s1 > r1)  cout << "Player 1 wins.";
                else if (s1 == r1) cout << "Tie.";
                else cout << "Player 2 wins.";
            }
            else cout << "Player 1 wins.";
        }
        else if(r1 == r2) cout << "Player 2 wins.";
        else
        {
            int ps, ms, pr, mr;
            if(s1 > s2)
            {
                ps = s1;
                ms = s2;
            }
            else
            {
                ps = s2;
                ms = s1;
            }

            if(r1 > r2)
            {
                pr = r1;
                mr = r2;
            }
            else
            {
                pr = r2;
                mr = r1;
            }

            if(ps > pr) cout << "Player 1 wins.";
            else if (pr > ps) cout << "Player 2 wins.";
            else
            {
                if(ms > mr) cout << "Player 1 wins.";
                else if (mr > ms) cout << "Player 2 wins.";
                else cout << "Tie.";
            }

        }
        cout << "\n";
    }
    return 0;
}