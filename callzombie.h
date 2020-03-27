#include<iostream>
#include<conio.h>
#include<Windows.h>
#include<iomanip>
#include "zombie.h"
#define textcolor(txt,back) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), back*16+txt)
using namespace std;


void ZombieZone(string name){
Unit hero,zom;
	hero.create("Hero",name);
	zom.create("Zombie",name);	
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
		cin.ignore();
		cin >> player_action;
		player_action = toupper(player_action);
		if(player_action == 'E') break; 
		
		zombie_action = 'A';
	
		
		//if(player_action == 'G') hero.guard();
		//if(zombie_action == 'G') zom.guard();S
		
		//if(player_action == 'H') p = hero.heal();
		
		if(player_action == 'A') p = hero.attack(zom); 
		if(zombie_action == 'A') m = zom.attack(hero); 
		
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

