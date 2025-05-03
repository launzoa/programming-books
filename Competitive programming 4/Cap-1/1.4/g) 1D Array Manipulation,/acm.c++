#include <bits/stdc++.h>

using namespace std;

int main()
{
    int time, i = 0, points = 0, cont = 0;
    string problem, value;
    unordered_map<string, int> erros;

    while(cin >> time && time != -1)
    {
        cin >> problem >> value;

        if(value == "right") 
        {
            if(erros.find(problem) != erros.end()) points += erros[problem] * 20 + time;
            else points += time;

            cont++;
        }    
        else
        {   
            if(erros.find(problem) != erros.end()) erros[problem]++;
            else erros[problem] = 1;
        }
    }

    cout << cont << " " << points;
    
    return 0;
}