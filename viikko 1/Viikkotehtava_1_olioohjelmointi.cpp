#include <iostream>
#include <ctime>

using namespace std;
int game(int maksimi);

int main()
{
    int maara = game(2000);
    cout << "Arvausten maara on " << maara << endl;
    /*
    {
    cout << "Hello World!" << endl;
    num = 88;
    int kertoma(int num);

    int tulos = 1;
    for(int i=1; 1 < num+1; i++);
    tulos = tulos * i;

}
    cout << tulos << endl;
    */

    return 0;
}

int game(int maksimi){

    int arvaus = 0;
    int arvausten_maara = 0;
    srand(time(NULL));
    int satunnaisluku = (rand() % maksimi) + 1;
    cout << "satunnaisluku on " << satunnaisluku << " Maksimi luku on " << maksimi << endl;

    while ( arvaus != satunnaisluku) {     cout << "Anna random luku " << endl;
        cin >> arvaus;
        cout << "pelaajan arvaus on " << arvaus << endl;

        arvausten_maara++;
        cout << "Arvaukset " << arvausten_maara << endl;
        if (arvaus == satunnaisluku) {
            cout << "Oikein " << endl;
        } else if (arvaus < satunnaisluku) {
            cout << "Luku on isompi" << endl;
        } else if (arvaus > satunnaisluku) {
            cout << "Luku on pienempi" << endl;
        }
    }
    return arvausten_maara;
    cout << "Peli loppui" << endl;
}
