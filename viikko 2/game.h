#ifndef GAME_H
#define GAME_H

class game
{
public:
    game(int); // konstruktori
    ~game(); //destruktori
    void play(); // tähän toteutetaan koko pelialgoritmit

    void printGameResult(); // tulostaa oikean luvun ja pelaajan arvauksien määrän

private:
    int maxNumber = 20; // suurin arvattava luku
    int playerGuess; // senhetkinen arvaus
    int randomNumber = 0; // tähän tallennetaan se satunnaisluku
    int numOfGuesses = 0; // laskee pelaajan arvauksia


protected:

};

#endif // GAME_H
