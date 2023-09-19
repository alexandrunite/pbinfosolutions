#include <bits/stdc++.h>
using namespace std;
ifstream cin("permutari.in");
ofstream cout("permutari.out");
int n , x[10];
void afisare()
{
    for(int i = 1 ; i <= n ; i++)
        cout << x[i] << " ";
    cout << endl;
}
int valid(int k)
{
    ///verific daca x[k] nu mai apare inainte
    for(int i = 1 ; i < k ; i++)
        if(x[i] == x[k]) return 0;
    return 1;
}
void back(int k)///k = poz la care am ajuns
{
    for(int i = 1 ; i <= n ; i++)///de unde se ia x[k]
    {
        x[k] = i;
        if(valid(k))///daca e valid (nu se repeta)
            if(k == n) afisare();///solutie
            else back(k + 1);///trec la poz urmatoare
    }
}
int main()
{
    cin >> n;
    back(1);///incep generarea de la 1
    return 0;
}
