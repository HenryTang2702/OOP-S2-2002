#ifndef PLAYER_H
#define PLAYER_H
#include<iostream>
#include<string>
using namespace std;

class Player
{
    protected:
    char recentMove;
    int numMoves;
public:
    Player();
    virtual void move() = 0;
    virtual std::string getMoves() = 0;
    char getMove();             // returns the most recent move made
    bool win(Player *opponent); // compares players’ moves to see who wins
    ~Player();

private:
};

#endif