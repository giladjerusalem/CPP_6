#pragma once
#include <iostream>
#include <string> 
#include <cstdlib>
#include <ctime>
#include "Team.hpp"


class Game{

    private:
    Team *home, *away;
    int scoreHome,scoreAway,isPlayed;



    public:
    Game(){};

    Game(const Game &g){
        std::cout<<"aaa\n";
        (*this) = &g;
    };
    Game(Team& h, Team& a):home(&h),away(&a),scoreHome(0),scoreAway(0),isPlayed(0){};

    Game& playGame();
    int getHome();
    int getAway();
    int getStatus();
    friend std::ostream& operator<<(std::ostream& out, const Game& g){
        if(g.isPlayed==0){
            out<<"The game not played.";
        }
        else{
            int key1 = g.home->getKey();
            int key2 = g.away->getKey();
            out<<"Home:"<<key1<<" - "<<g.scoreHome<<" | Away: "<<key2<<" - "<<g.scoreAway;
        }
        return out;
    }

};