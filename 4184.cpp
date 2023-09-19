#include <iostream>
#include <cstring>

using namespace std;

void FNume(char s[],char id[])
{
    char *p=strtok(s," ");
    p=strtok(NULL," ");
    strcpy(id,p);
    strcat(id,"2022");
    cout<<id;
}

int main()
{
    char id[257];
    FNume("David Popovici", id);
}
