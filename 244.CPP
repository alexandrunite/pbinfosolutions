#include <iostream>
#include <fstream>
using namespace std;

ifstream f("cifreord.in");
ofstream g("cifreord.out");

int main()
{
    int n,cif[10]={0};
    f>>n;
    for(int i=1;i<=n;i++)
    {
        int x;
        f>>x;
        cif[x]++;
    }
    int cont=0;
    for(int i=0;i<=9;i++)
    {
        while(cif[i])
        {
            g<<i<<' ';
            cif[i]--;
            cont++;
            if(cont==20)
            {
                g<<endl;
                cont=0;
            }
        }
    }
    return 0;
}
