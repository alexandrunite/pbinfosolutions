#include <cstring>
#include <iostream>
#include <fstream>


using namespace std;

ifstream f("inlocuirecuvant.in");
ofstream g("inlocuirecuvant.out");

int main()
{
    char s[101],a[11],b[11],s1[250],aux[11];
    f>>a>>b;
    f.get();
    f.getline(s,101);
    char *p=strtok(s," ");
    while(p)
    {
        if(strcmp(p,a)==0)
            {
                strcat(s1,b);
            }
        else
            {
                strcat(s1,p);
            }
            strcat(s1," ");
        p=strtok(NULL," ");
    }
    g<<s1;
    return 0;
}
