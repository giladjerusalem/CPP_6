#include "Team.hpp"

int Team::getKey()
{
    return this->key;
}

Team &Team::addWin()
{
    if(this->lastIsWin){
        this->rangeWins++;
    }
    else{
        this->rangeWins=1;
    }
    if(this->maxWins<this->rangeWins){
        this->maxWins=this->rangeWins;
    }
    lastIsWin=true;
    this->wins++;
    return *this;
}

int Team::getWin()
{
    return this->wins;
}

Team &Team::addLoss()
{
    if(!this->lastIsWin){
        this->rangeLoss++;
    }
    else{
        this->rangeLoss=1;
    }
    if(this->maxLoss<this->rangeLoss){
        this->maxLoss=this->rangeLoss;
    }
    lastIsWin=false;
    this->loss++;
    return *this;
}

int Team::getLoss()
{
    return this->loss;
}

Team &Team::addGoal(int g)
{
    this->goal+=g;
    return *this;
}

int Team::getGoal()
{
    return this->goal;
}

Team &Team::addAbsorptivity(int a)
{
    this->absorptivity+=a;
    return *this;
}

int Team::getAbsorptivity()
{
    return this->absorptivity;
}

float Team::getTalent(){
    return this->talent;
}

int Team::getMaxWins(){
    return this->maxWins;
}
int Team::getMaxLoss(){
    return this->maxLoss;
}

std::ostream& operator<<(std::ostream& out, const Team& team){
    out<<"Team number: "<<team.key<<", goals: "<<team.goal<<", absorptivity: "<<team.absorptivity<<", over:"<<(team.goal-team.absorptivity)<<"\n";
    out<<"wins: "<<team.wins<<", loss: "<<team.loss<<", points: "<<(team.loss+(2*team.wins))<<"";

    
    return out;
}