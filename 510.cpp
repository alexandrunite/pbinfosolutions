
#include <iostream>
using namespace std;

int primeVer(int n)
{
    for(int d=2;d*d<=n;d++)
        if (n%d==0)
            return 0;
        return 1;
}

void swapi(int *a,int *b)
{
    int token=*a;
    *a=*b;
    *b=token;
}

int main()
{
    int n;
    cin>>n;
    int v[n];
    for(int i=0;i<n;i++)
        cin>>v[i];
    for(int i=0;i<n;i++)
        if(!primeVer(v[i]))
            v[i]=0;
    //selectionsort
    int minIndex;
    for(int m=0;m<n-1;m++)
    {
        minIndex=m;
        for(int c=m+1;c<n;c++)
        {
            if(v[c]<v[minIndex])
                minIndex=c;
        }
        swapi(&v[minIndex], &v[m]);
    }
    for(int i=0;i<n;i++)
    {
        if(v[i]!=0&&v[i]!=1)
            cout<<v[i]<<' ';
    }
}
