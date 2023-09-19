
#include <iostream>

using namespace std;


int main()
{
    int n;
    cin>>n;
    int v[n];
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    int minc,aux;
    for(int m=0;m<n-1;m++)
    {
        minc=m;
        for(int i=m+1;i<n;i++)
        {
            if(v[i]<v[minIndex])
                {
                    minc=i;
                }
        }
        aux=v[m];
        v[m]=v[minc];
        v[minc]=aux;
    }
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<' ';
    }
}
