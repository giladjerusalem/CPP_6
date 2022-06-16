#include "Game.hpp"




    Game& Game::playGame(){
        if(this->isPlayed==0){
            this->isPlayed=1;

            float talH = this->home->getTalent();
            float talA = this->away->getTalent();

            srand((unsigned int)time(0));
            int scoreH=(rand() % 45) + 56 + (int)(talH*10);
            srand((unsigned int)time(0)+5);
            int scoreA=(rand() % 50) + 51 + (int)(talA*10);
            
            // extra time
            while(scoreH==scoreA){
                srand((unsigned int)time(0));
                scoreH+=(rand() % 10)+ (int)((talH*10)/3);
                srand((unsigned int)time(0)+5);
                scoreA+=(rand() % 5) + (int)((talA*10)/3);                
            }
            this->scoreHome=scoreH;
            this->scoreAway=scoreA;
                       
        }

        return *this;
    }

    int Game::getHome(){
        return this->scoreHome;
    }

    int Game::getAway(){
        return this->scoreAway;
    }

    int Game::getStatus(){
        return this->isPlayed;
    }
    //std::ostream& operator<<(std::ostream& out, const Game& g){
    //}
