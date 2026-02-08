#include <iostream>
#include "notifikaattori.h"

using namespace std;

int main()
{
    //cout << "Hello World!" << endl;
    //return 0;

    Notifikaattori n;
    Seuraaja* s1 = new Seuraaja("Pertti");
    Seuraaja* s2 = new Seuraaja("Vertti");
    Seuraaja* s3 = new Seuraaja("Tertti");

    n.tulosta();
    n.postita("Moro");
    n.poista(s2);

    n.lisaa(s1);
    n.lisaa(s2);
    n.lisaa(s3);
    n.tulosta();
    n.postita("Moro");

    n.poista(s2);
    n.tulosta();
    n.poista(s1);
    n.poista(s3);
    n.tulosta();
    return 0;
}
