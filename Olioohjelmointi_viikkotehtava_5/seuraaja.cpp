#include "seuraaja.h"
#include <iostream>
using namespace std;

/*Seuraaja();
Seuraaja(string);
string getNimi();
void paivitys(string);
*/

Seuraaja::Seuraaja()
{
    //cout << "S konst" << endl;
}

Seuraaja::Seuraaja(string aNimi)
{
    //cout << "S param konst" << endl;
    nimi = aNimi;
}

string Seuraaja::getNimi()
{
    //cout << "getN" << endl;
    return(nimi);
}

void Seuraaja::paivitys(string viesti)
{
    //cout << "paiv" << endl;
    cout << "viesti: " << viesti << endl;
}
