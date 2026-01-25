#include "italianchef.h"
#include "chef.h"
#include <iostream>
ItalianChef::ItalianChef()
{
    cout << "Olen Italiadefaultkonstruktorissa" << endl;
}

ItalianChef::ItalianChef(string cN)
{
    cout << "Olen Italiainputkonstruktorissa" << endl;
    chefName = cN;
}

ItalianChef::~ItalianChef()
{
    cout << "Olen Italiadefaultdestruktorissa" << endl;
}

/*Jäsenfunktio askSecret() tarkistaa onko parametrinä annettu
salasana ok, ja jos on, kutsuu makePizza()-jäsenfunktiota.
Muut parametrit ovat ainesten eli jauhojen (flour) ja veden (water) määrä.
Funktio palauttaa true/false sen mukaan oliko salasana oikea.*/

bool ItalianChef::askSecret(string pw, int amountOfWater, int amountOfFlour)
{
    int numberOfPizzas;
    if (pw == password){

    water = amountOfWater;
    flour = amountOfFlour;
    numberOfPizzas = makePizza();
    cout << "Jauhoja on: " << flour << " ja vetta on: " << water << endl;
    cout << "Saatiin tehtya: " << numberOfPizzas << " pizzaa" << endl;
    return true;
    }
        else
    return false;
}

int ItalianChef::makePizza()
{
    while (flour / 5 > water / 5) {
        flour--;
    }
    while (flour / 5 < water / 5) {
        water--;
    }
    int lasku = ((flour /5) + (water/5)) /2;
    //cout << "Tehdaanpa pizzaa!" << endl;

    // tee tähän pizzanvalmistusalgoritmi
    // int numberOfPizzas = ...
    return lasku; //numberOfPizzas;
}
