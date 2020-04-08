#include<iostream>
#include"open.h"
#include<Windows.h>
#include<string>
#include"gamestart.h"
#include<ctime>
#include"record.h"
#include"story.h"
using namespace std;

int main(){
    system("cls");
    srand(time(0));
    opengame();
    ifstream f("player.txt");
    string nameplayer,text;
    story();
    while(1){
        getline(f,nameplayer);
        if(!getline(f,text))break;
        else nameplayer=text;
    }
    int score=0;
    gamestart(nameplayer,score);
    yourscore(score);
    showrecord();
}