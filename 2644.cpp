#include <fstream>
using namespace std;
#define ll long long
ifstream f("clase.in");
ofstream g("clase.out");

int main()
{
    ll n,v[10001]={0},cont=0;
    f>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        f>>x;
        v[x]++;
    }
    int m;
    f>>m;
    for(int i=0;i<m;i++)
    {
        int x;
        f>>x;
        if(v[x])
            v[x]--,cont++;
    }
    g<<cont;
    return 0;
}
