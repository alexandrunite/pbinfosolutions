#include <fstream>
#include <iostream>
using namespace std;
#define ll long long
ifstream f("clase.in");
ofstream g("clase.out");
/**
ll cautareBinara(ll v[],ll n,ll val)
{
    bool ok=true;
    int ls=1,ld=n,mij;
    while(ls<ld&&ok==0)
    {
        mij=(ls+ld)/2;
        if(v[mij]==val)
            ok=1;
        else if(val<v[mij])
            ld=mij-1;
        else
            ls=mij+1;
    }
    if(ok||v[ls]==val)
        return 1;
    else
        return 0;
}
**/
int cautareBinara(ll v[],ll n,ll nr)
{
    int ls=1,ld=n,mij;
    bool ok=false;
    while(ls<ld&&ok==0)
    {
        mij=(ls+ld)/2;
        if(v[mij]==nr)
            ok=true;
        else if(nr<v[mij])
            ld=mij-1;
        else
            ls=mij+1;
    }
    if(ok||v[ls]==nr)
        return 1;
    else
        return 0;
}
int main()
{
    ll n,m,v[10001],cont=0;
    f>>n;
    for(int i=1;i<=n;i++)
    {
        f>>v[i];
    }
    f>>m;
    for(int i=1;i<=m;i++)
    {
        int x;
        f>>x;
        if(cautareBinara(v,n,x))
            cont++;
    }
    g<<cont;
    return 0;
}
