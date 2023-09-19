#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char sir[256], sir2[256] = "";
    cout << "Textul: ";
    cin.get(sir, 256);

    /// a. inversarea lui in alt sir de caractere
    strrev(strcpy(sir2, sir));
    cout << "Inversat in alt sir: "<< sir2 << endl;

    /// b. inversat in el insusi
    strrev(sir);
    cout << "Inversat in el insusi: " <<sir;
}