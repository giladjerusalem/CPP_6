#pragma once
#include <iostream>
#include <string> 
#include <cstdlib>
#include <ctime>
#include "Game.hpp"
#include <vector>

class Schedule{

    private:
    std::vector<Game> *games;
    //Game *games[2];
    //int scoreHome,scoreAway,isPlayed;
    


    public:
    Schedule(std::vector<Game> &g):games(&g){
        //this->games = std::vector<Game>(2);
        //this->games = g;
        // for (size_t i = 0; i < 2; i++){
        //     this->games[i]=g[i];
        // }
        for(size_t i=0;i<2;i++){
            //std::cout<<g[i]<<"\n";
            //out<<i<<" game: "<<g.games[i]<<"\n";
        }
    };


    friend std::ostream& operator<<(std::ostream& out, const Schedule& g){
        // for(size_t i=0;i<2;i++){
        //     std::cout<<g.games[0]<<std::endl;
        //     //out<<i<<" game: "<<g.games[i]<<"\n";
        // }
        return out;
    }

};