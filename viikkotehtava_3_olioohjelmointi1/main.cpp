#include <iostream>
#include "chef.h"
#include "italianchef.h"
#include <string>
using namespace std;

int main()
{
    string kokinNimi;
    Chef kokki_1("Toponen");
    //Chef kokki_2();
    kokinNimi = kokki_1.getName();
    cout << "Main: kokinNimi on " << kokinNimi << endl;
    kokki_1.makeSalad(10);
    kokki_1.makeSalad(4);
    kokki_1.makeSalad(18);

    kokki_1.makeSoup(9);
    kokki_1.makeSoup(2);
    kokki_1.makeSoup(1);

    //ItalianChef it_kokki_1();
    ItalianChef it_kokki_2("Joni Qiuseppi");
    //it_kokki_1.makeSalad(15);
    it_kokki_2.makeSalad(12);
    it_kokki_2.makeSoup(7);

    it_kokki_2.askSecret("pizza", 12, 18);

    return 0;
}
