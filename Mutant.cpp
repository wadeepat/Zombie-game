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
    Sleep(2000);
    string nameplayer;
    srand(time(0));
    opengame(nameplayer);
    story();
    int score=0;
    gamestart(nameplayer,score);
    yourscore(score);
    showrecord();
}