#include <iostream>
using namespace std;

int main()
{
    int victory[] = {8, 5, 2};
    int g,s,c, total;

    cin >> g >> s >> c;
    total = g*3 + s*2 + c*1;
    
    if(total >= victory[0]) cout << "Province or Gold";
    else if(total >= victory[1])
    {
        if(total >= 6) cout << "Duchy or Gold";
        else cout << "Duchy or Silver";
    }
    else if(total >= victory[2])
    {
        if(total >= 3) cout << "Estate or Silver";
        else cout << "Estate or Copper";
    }
    else cout << "Copper";

    return 0;
}