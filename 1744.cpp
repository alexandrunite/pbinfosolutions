#include <iostream>
#include <fstream>
using namespace std;

ifstream f("nrlipsa2.in");
ofstream g("nrlipsa2.out");

int main()
{
    int n,cif[201]={0};
    while(f>>n)
    {
        if(n>=-100&&n<0)
            cif[n+100]++;
        else if(n>0&&n<=100)
            cif[n+100]++;
        else if(n==0)
            cif[100]++;
    }
    int cont=0;
    for(int i=-100;i<=100;i++)
    {
        if(cif[i+100]==0)
        {
            cont=1;
            g<<i;
            break;
        }
    }
    if(cont==0)
    {
        g<<"nu exista";
    }
    return 0;
    f.close();
    g.close();
}
