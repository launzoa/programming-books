#include <iostream>
using namespace std;

int main()
{

    string mes;
    int dia;

    cin >> mes >> dia;

    if(mes == "OCT" && dia == 31) cout << "yup";
    else if(mes == "DEC" && dia == 25) cout << "yup";
    else cout << "nope";
    return 0;
}