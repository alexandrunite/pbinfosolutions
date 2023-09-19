#include <iostream>
using namespace std;
void nr_cif_zero(int n,int& nr)
{
    if(n<9)
    {
        if(n==0)
            nr=nr+1;
    }
    else
    {
        if(n%10==0)
        {nr++;
        nr_cif_zero(n/10,nr);
        }
        else
        nr_cif_zero(n/10,nr);
    }
}
int main()
{
    int nr=0;
    nr_cif_zero(2050,nr);
    cout<<nr;
}
