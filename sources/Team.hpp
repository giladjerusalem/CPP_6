#pragma once
#include <iostream>
#include <string> 




class Team{

    private:

    int key, wins, loss, goal, absorptivity, rangeWins, rangeLoss, maxLoss, maxWins;
    bool lastIsWin;
    float talent;
    //string name;


    public:
    Team(int k):key(k),talent(0.5),wins(0),loss(0),goal(0),absorptivity(0),rangeWins(0),rangeLoss(0),lastIsWin(false),maxWins(0),maxLoss(0){
    };
    Team(int k, float tal):key(k),wins(0),loss(0),goal(0),absorptivity(0),rangeWins(0),rangeLoss(0),lastIsWin(false),maxWins(0),maxLoss(0){
        if(tal>1||tal<0){
            throw std::invalid_argument("Talent not between 0 and 1");
        }
        this->talent=tal;
    };
    int getKey();
    Team& addWin();
    int getWin();
    Team& addLoss();   
    int getLoss();   
    Team& addGoal(int g);
    int getGoal();
    Team& addAbsorptivity(int a);   
    int getAbsorptivity(); 
    int getMaxWins();
    int getMaxLoss();
    float getTalent();  
    friend std::ostream& operator<<(std::ostream& out, const Team& team);

};