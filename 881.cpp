#include <iostream>
using namespace std;

int scor(int acasa, int oponenti)
{
    if(acasa==oponenti && oponenti==0)
        return 1;
    else return scor(acasa-1, oponenti)+scor(acasa, oponenti-1);
}
int main()
{
    int acasa, oponenti;
    cin>>acasa>>oponenti;
    cout<<scor(acasa, oponenti);
}
