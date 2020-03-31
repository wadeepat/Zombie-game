#include<iostream>
#include"open.h"
#include<Windows.h>
#include<string>
#include"gamestart.h"
#include<ctime>
#include"record.h"
using namespace std;

int main(){
    srand(time(0));
    namegame();
    playgame r;
    r.main_menu();
    ifstream f("player.txt");
    string nameplayer,text;
    while(1){
        getline(f,nameplayer);
        if(!getline(f,text))break;
        else nameplayer=text;
    }
    int score=0;
    gamestart(nameplayer,score);
    showscore(score);



}