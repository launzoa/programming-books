#include <iostream>

using namespace std;

int main()
{

    string nome, data, nasc;
    int n, cursos;

    cin >> n;

    while(n != 0)
    {
        cin >> nome >> data >> nasc >> cursos;
        
        int d = stoi(data.substr(0, 4));
        int nas = stoi(nasc.substr(0, 4));

        if(d >= 2010 || nas >= 1991) cout << nome << " eligible" << endl;
        else if (cursos <= 40) cout << nome << " coach petitions" << endl;
        else cout << nome << " ineligible" << endl;
        n--;
    }

    return 0;
}