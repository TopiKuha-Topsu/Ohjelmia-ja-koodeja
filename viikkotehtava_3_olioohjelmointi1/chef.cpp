#include "chef.h"
#include <iostream>

Chef::Chef()
{
    //cout << "Olen default konstruktorissa" << endl;
}

Chef::Chef(string cN)
{
    //cout << "Olen input konstruktorissa" << endl;
    chefName = cN;
}
Chef::~Chef()
{
    //cout << "Olen default destruktorissa" << endl;
}

int Chef::makeSalad(int numberOfItems)
{
    //cout << "Olen salaattifunktiossa" << endl;
    //int numberOfPortions = numberOfItems/5;
    cout << "Annoit: " << numberOfItems << " ainesta" << endl;
    cout << "Siita saadaan: " << numberOfItems/5 << " Salaattiannosta" << endl;
    return numberOfItems/5;
}

int Chef::makeSoup(int numberOfItems)
{
    //cout << "Olen soppafunktiossa" << endl;
    cout << "Annoit: " << numberOfItems << " ainesta" << endl;
    cout << "Siita saadaan: " << numberOfItems/3 << " Soppa-annosta" << endl;
    return numberOfItems/3;
}

string Chef::getName()
{
    //cout << "Olen getterissa:" << endl;
    cout << "Kokin nimi on: " << chefName << endl;
    return chefName;
}

void Chef::setName(string cN)
{
    //cout << "Olen setterissa:" << endl;
    chefName = cN;
}
