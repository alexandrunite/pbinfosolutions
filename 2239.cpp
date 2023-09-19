#include <cmath>
#include <fstream>
#include <iostream>
using namespace std;
#define ll long long

void sortThem(int v[],int n)
{
    for(int i=1;i<n;i++)
    {
        for(int j=i;j<=n;j++)
        {
            if(v[j]<v[i])
            {
                int aux;
                aux=v[i];
                v[i]=v[j];
                v[j]=aux;
            }
        }
    }
}

int cautareBinara(int v[],int n,int nr)
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
    int n,v[100001],p[32],cont=0,nrmax=-999999;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>v[i];
        if(v[i]>nrmax)
            nrmax=v[i];
    }
    sortThem(v,n);
    for(int i=1;i<=32;i++)
    {
        p[i]=pow(2,i);
    }
    for(int i=1;i<=n;i++)
    {
        int j=1;
        while(v[i]+nrmax<p[j])
        {
            cout<<v[i]+nrmax<<' ';
            j++;
            if(v[i]<p[j])
            {
                int pereche;
                pereche=p[j]-v[i];
                cout<<pereche<<' ';
                if(cautareBinara(v,n,pereche))
                    cont++;
            }
        }
        cout<<endl;
    }
    cout<<cont;
    return 0;
}
