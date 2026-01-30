#include <iostream>
#include "pankkitili.h"
#include "luottotili.h"

using namespace std;

int main()
{
    //cout << "Hello World!" << endl;

    Pankkitili pt1;
    Pankkitili pt2 ("topsu");
    Luottotili lt1 ("joni", 1000000);
    Luottotili lt2 ("popsu", 500);
    pt2.deposit(100);
    pt2.withdraw(50);
    double luettusaldo = pt2.getBalance();
    cout << "Topsun luettu saldo: " << luettusaldo << endl;
    luettusaldo = lt2.getBalance();
    cout << "Popsun luettu saldo: " << luettusaldo << endl;
    lt2.withdraw(100);
    lt2.deposit(50);
    luettusaldo = lt1.getBalance();
    cout << "Jonin luettu saldo: " << luettusaldo << endl;
    lt1.withdraw(100);
    lt1.deposit(1000000);

    return 0;
}
