#include <iostream>
using namespace std;

void swapI(int *a,int *b)
{
    int token=*a;
    *a=*b;
    *b=token;
}

int main()
{
    int v[1001],c[1001];
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>v[i];
    }
    int minIndex;
    for(int m=1;m<=n-1;m++)
    {
        minIndex=m;
        for(int i=m+1;i<=n;i++)
        {
            if(v[i]<v[minIndex])
                minIndex=i;
        }
        c[m]=minIndex;
        swapI(&v[minIndex], &v[m]);
    }
    for(int i=1;i<=n;i++)
    {
        cout<<c[i]<<' ';
    }
}
