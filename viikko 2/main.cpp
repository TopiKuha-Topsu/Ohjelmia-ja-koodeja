#include "game.h"
#include <iostream>

using namespace std;

int main()
{
    int maxNum (10);
    game peliOlio(maxNum);
    peliOlio.play();
    peliOlio.printGameResult();
    //cout << "Hello World!" << endl;
    return 0;
}
