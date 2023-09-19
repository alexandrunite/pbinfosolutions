#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char cuv[257];
    int poz1, poz2,n;
    cin.getline(cuv,257);
    int i=0;
    int ok=0;
    while(cuv[i]!=NULL&&ok==0)
    {
        if(strchr("aeiouAEIOU",cuv[i]))
           {
                poz1=i;
                ok=1;
           }
        i++;
    }
    n=strlen(cuv);
    i=n;
    while(i>=0&&ok==0)
    {
        if(strchr("bcdfghjklmnprsqtvwxyzBCDFGHJKLMNPRSQTVWXYZ",cuv[i]))
            {
                poz2=i;
                ok=1;
           }
        i--;
    }
    char voc,cons;

    swap(cuv[poz1],cuv[poz2]);
    cout<<cuv;
}
