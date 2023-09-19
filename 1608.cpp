#include <iostream>
#include <fstream>
using namespace std;

int nrDivizori(int n)
{
    int nr=0,i;
    for(i=1;i*i<=n;i++)
    {
        if(n%i==0)
            nr+=2;
    }
    if (i*i==n)
        nr--;
    return nr;
}

int main()
{
    int n,v[1001];
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>v[i];
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=i+1;j<=n;j++)
        {
            if(nrDivizori(v[i])<nrDivizori(v[j]))
            {
                int aux;
                aux=v[j];
                v[j]=v[i];
                v[i]=aux;
            }
            if(v[i]==v[j])
                {
                    int aux;
                    if(v[i]>v[j])
                        {
                            aux=v[j];
                            v[j]=v[i];
                            v[i]=aux;
                        }
                    else
                    {
                        aux=v[i];
                        v[i]=v[j];
                        v[j]=aux;
                    }
                }
        }
    }

    for(int i=1;i<=n;i++)
        cout<<v[i]<<' ';
    return 0;
}
