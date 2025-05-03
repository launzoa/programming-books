#include <iostream>
#include <sstream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore(); 

    while(n-- != 0)
    {
        string expr;
        cin >> expr;  
        
        if(expr != "P=NP")
        {
            vector<string> tokens;
            string token;
            istringstream ss(expr); 

            while(getline(ss, token, '+')) {
                tokens.push_back(token);
            }
            cout << stoi(tokens[0]) + stoi(tokens[1]);
        }
        else cout << "skipped";
        cout << endl;
    }

    return 0;
}