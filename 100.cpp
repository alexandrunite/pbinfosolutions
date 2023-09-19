#include<iostream>
#include<fstream>

using namespace std;



int verifPrime(int n)
{
    if(n==0||n==1)
        return 0;
    if(n==2)
        return 1;
    else
    {for(int i=2;i<=n/2;i++)
        if(n%i==0)
            return 0;
    return 1;
    }
}

int main()
{
    int n,nr,cont=0;
    ifstream f("nrapprime.in");
	ofstream g("nrapprime.out");
    f>>n;
	while(f>>nr)
    {
        if(verifPrime(nr))
            cont++;
    }
    g<<cont;
    f.close();
    g.close();
    return 0;
}
