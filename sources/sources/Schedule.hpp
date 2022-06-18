#pragma once
#include <iostream>
#include <string> 
#include <cstdlib>
#include <ctime>
#include "Game.hpp"
#include "Team.hpp"
#include <vector>
#include <map>

class Schedule{

    public:
    //std::vector<Game> *games;
    std::map <Team,Game *games[38]> all_games;
    //int scoreHome,scoreAway,isPlayed;
    


    Schedule( std::map <Team, Game *games[38]> &all):all_games(&all){
        // this->games = std::vector<Game>(2);
        // this->games = g;
        // for (size_t i = 0; i < 2; i++){
        //     this->games[i]=g[i];
        // }
        // for(size_t i=0;i<2;i++){
        //     std::cout<<g[i]<<"\n";
        //     out<<i<<" game: "<<g.games[i]<<"\n";
        // }
    };


    Schedule& run();

    friend std::ostream& operator<<(std::ostream& out, const Schedule& g){
        for(size_t i=0;i<2;i++){
            std::cout<<g.games[0]<<std::endl;
            out<<i<<" game: "<<g.games[i]<<"\n";
        }
        return out;
    }

};