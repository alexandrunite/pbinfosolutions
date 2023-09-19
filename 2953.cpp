#include <cstring>
#include <iostream>
#include <fstream>

using namespace std;

ifstream f("inserarechar.in");
ofstream g("inserarechar.out");

int verificare(char s[],char cuv[])
{
    char *p1=strtok(s," ");
    while(p1)
    {
        if(!strcmp(p1,cuv))
            return 1;
        p1=strtok(NULL," ");
    }
    return 0;
}

int main()
{
    int cont=0,ok;
    char text[257],a[16];
    f.getline(a,16);
    f.getline(text,257);
    ok=verificare(text,a);
    char *p=strtok(text," ");
    if(ok)
    {
        do
        {
            if(!strcmp(p,a))
            {
                g<<p;
                g<<"?";
                cont++;
            }
            else
            {
                g<<p;
            }
            p=strtok(NULL," ");
            if(p)
                g<<" ";
        }while(p);
    }
    else
    {
        g<<"NU EXISTA";
    }
}
