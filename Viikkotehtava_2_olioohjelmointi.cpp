#include "game.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

game::game(int mN)
{
    cout << "Peli luotu" << endl;
    maxNumber = mN;
}

game::~game()
{
    cout << "Peli tuhottu" << endl;
}

void game::play()
{
    cout << "Pelissa" << endl;

    srand(time(0));
    randomNumber = (rand()%maxNumber)+1;
    bool stayInLoop = true;
    while(stayInLoop)
    {
        cout<<"Give your guess between 1-"<<maxNumber<<endl;
        cin>>playerGuess;
        numOfGuesses++;
        if(playerGuess == randomNumber)
        {
            cout<<"Arvasit oikein luku = "<<playerGuess<<endl;
            stayInLoop = false;
        }
        else if(playerGuess<randomNumber)
        {
            cout<<"Lukusi on liian pieni"<<endl;
        }
        else
        {
            cout<<"Lukusi on liian suuri"<<endl;
        }
    //cout << "maxNumber" << maxNumber << endl << "randomNumber" << randomNumber << endl;
}
}

void game::printGameResult()
{
    cout << "Tulostuksessa" << endl;
    cout << "Oikea luku " << randomNumber << endl << "Arvausten maara " << numOfGuesses << endl;
}


