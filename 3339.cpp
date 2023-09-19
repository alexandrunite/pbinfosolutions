#include <bits/stdc++.h>
using namespace std;

int t[33003],n;
int c[33003],M;

int gasire(int x)
{
    int rad,y;
    rad=x;
    while (t[rad] != 0)
        rad = t[rad];
    while (x != rad)
    {
        y = t[x];
        t[x] = rad;
        x = y;
    }
    return rad;
}
void unire(int x, int y)
{
    c[x]+=c[y];
    M=max(M,c[x]);
    t[y]=x;
}

int main()
{
    int m,i,x,y,op;
    cin>>n>>m;
    for (i=1; i<=n; i++)
        c[i]=0;
    do
    {
        cin>>op;
        if(op==3)
            cout<<M<<endl;
        else
        {
            cin>>x>>y;
            x=gasire(x);
            y=gasire(y);
            if (op==1)
            {
                if (x!=y)
                    unire(x, y);
            }
            else
            {
                if (x==y)
                    cout<<"DA"<<endl;
                else
                    cout<<"NU"<<endl;
            }
        }
    }
    while(m--!=0);
    return 0;
}
