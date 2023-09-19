#include <iostream>
#include <cmath>
#include <bits/stdc++.h>
using namespace std;

int modulu(int a)
{
    if(a<0)
        return a+2*a;
    else
        return a;
}

int main()
{
    int cont=0;
    int n;
    cin>>n;
    int a,b,c;
    int c1,c2,ip;
    struct coordonate{
        int x,y;
    };
    coordonate v[n];
    for(int i=0;i<n;i++)
    {
        cin>>v[i].x>>v[i].y;
    }
    for(int i=0;i<n;i++)
    {
        a=sqrt(pow(modulu(v[i].x-v[i+1].x),2)+pow(modulu(v[i].y-v[i+1].y),2));
        b=sqrt(pow(modulu(v[i+1].x-v[i+2].x),2)+pow(modulu(v[i+1].y-v[i+2].y),2));
        c=sqrt(pow(modulu(v[i].x-v[i+2].x),2)+pow(modulu(v[i].y-v[i+2].y),2));
        if(a+b>c&&a+c>b&&b+c>a)
        {
            if(a>b&&a>c)
                   if(a=sqrt(pow(b,2)+pow(c,2)))
                    {
                        cont++;
                    }
            else if(b>c&&b>a)
                    if(b=sqrt(pow(a,2)+pow(c,2)))
                    {
                        cont++;
                    }
            else if(c>a&&c>b)
                    if(c=sqrt(pow(a,2)+pow(b,2)))
                    {
                        cont++;
                    }
        }
    }
    cout<<cont;
    /**for(int i=0;i<n;i++)
    {
        cout<<v[i].x<<' '<<v[i].y;
        cout<<endl; //verific daca merge
    }**/
}
