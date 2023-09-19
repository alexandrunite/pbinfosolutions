#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char sir[256], c;
    int n;
    cout << "Textul: ";
    cin.get(sir, 256);
    cout << "Numarul de caractere: ";
    cin >> n;
    cout << "Caracterul de umplere ";
    cin >> c;
    strnset(sir, c, n);
    cout << sir;
}