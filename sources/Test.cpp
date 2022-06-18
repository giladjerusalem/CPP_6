#include "Team.hpp"
#include "Game.hpp"
#include "Schedule.hpp"
#include <iostream>
#include<bits/stdc++.h>
#include <string>
using namespace std;

int main() {
    Team t1{1};
    t1.addLoss().addLoss().addWin().addGoal(200).addAbsorptivity(250).addLoss().addWin().addWin().addWin().addLoss().addLoss().addLoss();
    cout<<"max wins: "<<t1.getMaxWins()<<", max loss: "<<t1.getMaxLoss()<<endl;
    t.getKey();
    Team t2{2};
    Game g{t1,t2};
    vector<Game> vec;
    vec.push_back(g);
    vec.push_back(g);
    g.playGame();
    Schedule game{vec};
    cout<< game <<endl;
    cout<< g <<endl;

    Game *s[2];
    s[0] = &g;
    s[1] = &g;

    Schedule sc{s};
    for (int i = 0 ; i < 2 ; i++ ) 
    {
        cout << *s[i] <<"\n ";
    }
    for (int i = 0 ; i < 2 ; i++ ) 
    {
        cout << *s[i] <<"\n ";
    }
    bool b = true;
    cout<< b <<endl;

    return 0;
}