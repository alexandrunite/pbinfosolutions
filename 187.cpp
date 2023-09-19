#include <iostream>
#include <fstream>
using namespace std;

ifstream f("ciffrecv.in");
ofstream g("ciffrecv.out");

int main()
{
    int n,cif[10]={0};
    while(f>>n)
    {
        if(n==7)
        {
            cif[7]++;
        }
        else if(n==5)
        {
            cif[5]++;
        }
        else if(n==3)
        {
            cif[3]++;
        }
        else if(n==2)
        {
            cif[2]++;
        }
    }
    int mx=0,pozi=0;
    for(int i=2;i<=7;i++)
    {
        if(cif[i]>mx)
            mx=cif[i],pozi=i;
        else if(cif[i]==mx)
            pozi=i;
    }
            g<<pozi;
            g<<' '<<mx;
    return 0;
}
