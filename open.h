#include<iostream>	
#include<vector>	
#include<conio.h>		
#include<dos.h>			
#include<windows.h>		
#include<iomanip>				
#include<string.h>				
#include<time.h>		
#include"MMSystem.h"
#include<fstream>
#include<string>
using namespace std;

class playgame{
	public:
	void create_account();
	void main_menu();
		
};
void chaeckname(string d,vector<string> vname){
	for(int i=0;i<vname.size();i++){
		if(d==vname[i]) cout << "This name already had";
	}
}
void effect(int x, int y){
    COORD coord = {0, 0};;
    coord.X = x;
    coord.Y = y; 
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
void frame0(){
	int i,j=79;
	for(i = 0;i<80,j>=0;i++,j--)
	{
		effect(i,3);
		Sleep(10);
		cout<<"_";
		effect(j,20);
		Sleep(10);
		cout<<"_";
	}
	effect(56,2);
	char s[20];
}
/*void play(int a){
	if(a==1)
	PlaySound(TEXT("D:\\Zombie-game\\Start.wav"), NULL, SND_SYNC);
    PlaySound(L"Start.wav", NULL, SND_ASYNC | SND_FILENAME);
}*/
void namegame(){
    //system("color 58");
	for(int i=0;i<10;i++){
		effect(5,i);cout<<" ";
		cout << "+++++++     ++++         +++++++             ++++++              ++++++++++     +++++++         +++++++    +++++       +++++           +++++++++";
		Sleep(30);
	}
	for(int i=0;i<9;i++){
		effect(5,i);cout<<" ";
		cout << "  +        +++  +         ++++             +++     ++               ++++          ++++           ++++        +        +++  +             ++++";
		Sleep(30);
	}
	for(int i=0;i<8;i++){
		effect(5,i);cout<<" ";
		cout << "  +       +++    +        ++++           +++         +              ++++           ++++         ++++         +       +++   +             ++++";
		Sleep(30);
	}
	for(int i=0;i<7;i++){
		effect(5,i);cout<<" ";
		cout << "  +      +++      +       ++++          +++          +              ++++            +++++++++++++++          +      +++    +             ++++";
		Sleep(30);
	}
	for(int i=0;i<6;i++){
		effect(5,i);cout<<" ";
		cout << "  +     +++        +      ++++         ++++          +              ++++             ++++     ++++           +     +++     +             ++++";
		Sleep(30);
	}
	for(int i=0;i<5;i++){
		effect(5,i);cout<<" ";
		cout << "  +    +++          +     ++++         ++++          +              ++++              ++++   ++++            +    +++      +             ++++";
		Sleep(30);
	}
	for(int i=0;i<4;i++){
		effect(5,i);cout<<" ";
		cout << "  +   +++            +    ++++         ++++          +              ++++               ++++ ++++             +   +++       +             ++++";
		Sleep(30);
	}
	for(int i=0;i<3;i++){
		effect(5,i);cout<<" ";
		cout << "  +  +++              +   ++++         ++++          +              ++++                +++++++              +  +++        +             ++++";
		Sleep(30);
	}
	for(int i=0;i<2;i++){
		effect(5,i);cout<<" ";
		cout << "  + +++                +  ++++         ++++          +              ++++                 +++++               + +++         +             ++++";
		Sleep(30);
	}
	for(int i=0;i<1;i++){
		effect(5,i);cout<<" ";
    	cout << "+++++++                  +++++++     ++++++++      ++++++      ++++++++++++++              +               +++++++      +++++++     ++++++++++++++";
		effect(5,i);cout<<" ";
		Sleep(30);
	}
	Sleep(2000);
system("cls");
}
void playgame:: main_menu(){
	int j,i,x,y;
	for(i=0;i<35;i++){
		effect(i,12);cout<<" ";
		cout<<"MUTANT";
		Sleep(40);
	}
    //play(1);
	for(int j=78;j>=0;j--){
		effect(j,20);cout<<"-";
		effect(j,4);cout<<"-";
		Sleep(30);
	}
	Sleep(2000);
	system("cls");
	frame0();
	effect(25,10);
    cout << "Press [Enter] to start";
    cin.get();
    playgame n;
    n.create_account();
}
void playgame::create_account(){
	playgame a;
	system("cls");
	for(int i=0;i<17;i++)
	{
		effect(5,i);
		cout<<"|";
		effect(75,i);
		cout<<"|";
	}
	effect(7,2);
    cout << "Enter your name : ";
	string nameplayer;
    getline(cin,nameplayer);
    ofstream player;
    player.open("player.txt",ios::app);
	player<<nameplayer<<endl;
    player.close();
	effect(35,13);
	cout<<" SUBMIT";
	char c;
	c=getche();
	effect(10,15);
	cout<<"Loading";
	Sleep(400);
	cout<<".";
	Sleep(400);
	cout<<".";
	Sleep(400);
	cout<<"."<<endl;
	Sleep(400);	
}
void opengame(){
    namegame();
    playgame r;
    r.main_menu();
}