#include "asiakas.h"
#include <iostream>
using namespace std;

/*
siakas();
Asiakas(string, double);
string getNimi();
void showSaldo();
bool talletus(double);
bool nosto(double);
bool luotonMaksu(double);
bool luotonNosto(double);
*/

Asiakas::Asiakas()
{
    //cout << "Asiakas: olen defaultkonstruktorissa" << endl;
}

Asiakas::Asiakas(string name, double lr) : kayttotili(name), luottotili(name, lr)
{
    //cout << "Asiakas: olen parametrikonstruktorissa" << endl;
    nimi = name;
}

bool Asiakas::tiliSiirto(double sum, Asiakas& kohde)
{
    if (sum <= 0) return false;

    if (!kayttotili.withdraw(sum)) {
        return false;
    }
    if (!kohde.kayttotili.deposit(sum)) {
        kayttotili.deposit(sum);
        return false;
    }
    return true;
}

string Asiakas::getNimi()
{
    return nimi;
}

void Asiakas::showSaldo()
{
    cout << "Kayttotilin saldo: " << kayttotili.getBalance() << endl;
    cout << "Luottotilin saldo: " << luottotili.getBalance() << endl;
}

bool Asiakas::talletus(double sum)
{
    kayttotili.deposit(sum);
}

bool Asiakas::nosto(double sum)
{
    kayttotili.withdraw(sum);
}

bool Asiakas::luotonMaksu(double sum)
{
    luottotili.deposit(sum);
}

bool Asiakas::luotonNosto(double sum)
{
    luottotili.withdraw(sum);
}
