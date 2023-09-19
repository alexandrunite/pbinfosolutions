#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s[101],s1[51][101];
    int i=0,lung,n1;
    cin.getline(s,101);
    char *p=strtok(s, " ");
    while(p)
    {
        strcpy(s1[i],p);
        p=strtok(NULL," ");
        i++;
    }
    bool ok=false;
    int imax=i;
    for(i=0;i<imax;i++)
    {
        lung=strlen(s1[i]);
        n1=lung/2;
        if(lung%2&&lung!=1)
        {
            ok=true;
            while(s1[i][n1+1]!='\0')
            {
                s1[i][n1]=s1[i][n1+1];
                n1+=1;
            }
            if(n1!=0)
                s1[i][n1]='\0';
        }
    }
    if(ok)
        for(i=0;i<imax;i++)
        {
            cout<<s1[i]<<' ';
        }
    else
        cout<<"nu exista";
    return 0;
}
