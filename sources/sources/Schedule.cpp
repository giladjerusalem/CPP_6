#include "Schedule.hpp"



    Schedule& Schedule::run(){
        for (const auto& kv : this.all_games) {
            for (int i = 0; i < 38; i++)
            {
                kv.second[i].playGame()
            }
        }

    }

