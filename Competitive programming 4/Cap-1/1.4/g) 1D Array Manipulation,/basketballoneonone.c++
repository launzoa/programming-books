#include <bits/stdc++.h>

using namespace std;

int main()
{
    string line;
    int i, a = 0, b = 0;

    cin >> line;

    for(i = 0; i < line.length() + 1; i++)
    {
       
        if(a >= 10 && b >= 10)
        {
            if(a-b >= 2) 
            {
                cout << "A";
                break;
            }
            if(b-a >= 2)
            {
                cout << "B";
                break;
            }
        }
        else
        {
            if(a > 10) 
            {
                cout << "A";
                break;
            }         
            if(b > 10)
            {
                cout << "B";
                break;
            }   
        }

        if(line[i] == 'A') a += line[++i] - '0';
        else b += line[++i] - '0';
    }
    
    return 0;
}