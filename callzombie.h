#include<iostream>
#include<conio.h>
#include<Windows.h>
#include<iomanip>
#include "zombie.h"
#include<limits>  
#include<ios>  
#define textcolor(txt,back) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), back*16+txt)
using namespace std;
void ClearConsoleInputBuffer()
    {
        PINPUT_RECORD ClearingVar1 = new INPUT_RECORD[256];
        DWORD ClearingVar2;
        ReadConsoleInput(GetStdHandle(STD_INPUT_HANDLE),ClearingVar1,256,&ClearingVar2);
        delete[] ClearingVar1;
    }

void ZombieZone(string name,int &hp){
Unit hero,zom;
	hero.create("Hero",name,hp);
	zom.create("Zombie",name,30);	
	int turn_count = 1;
	char player_action = '\0',zombie_action = '\0';
	int p = 0, m = 0;
	while(true){
		zom.newTurn();	
		hero.newTurn();			
		hero.showStatus();
		drawScene(player_action,p,zombie_action,m);
		zom.showStatus();		
		cout << "[A] Attack [E] Exit";
		cout << "\n[Turn " << turn_count << "] Enter your action: ";
		ClearConsoleInputBuffer();
		cin>>player_action;
		player_action='A';
		player_action = toupper(player_action);
		if(player_action == 'E') break; 
		zombie_action = 'A';
	
		
		//if(player_action == 'G') hero.guard();
		//if(zombie_action == 'G') zom.guard();S
		
		//if(player_action == 'H') p = hero.heal();
		
		if(player_action == 'A') p = hero.attack(zom); 
		if(zombie_action == 'A') m = zom.attack(hero);
		hp=hero.gethp();
		if(hero.isDead()){
			drawScene(player_action,p,zombie_action,m);
			playerLose();
			break; 
		}
		
		if(zom.isDead()){
			drawScene(player_action,p,zombie_action,m);
			playerWin();
			break; 
		}
		
		turn_count++;
	}	
}

