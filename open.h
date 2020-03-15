#include<iostream>	
#include<vector>	
#include<conio.h>		
#include<dos.h>			
#include<windows.h>		
#include<iomanip>				
#include<string.h>				
#include<time.h>		
#include"MMSystem.h"
using namespace std;
class playgame{
	public:
	void create_account();
	void main_menu();
		
};
void effect(int x, int y){
    COORD coord = {0, 0};;
    coord.X = x;
    coord.Y = y; 
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
void frame(){
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
	int j,i,x,y;
	for(i=0;i<15;i++)
	{
		effect(i,13);cout<<" ";
		cout<<"CORONA ZOMBIE SURVIVOR";
		Sleep(40);
	}

	for(j=60;j>37;j--)
	{
		effect(j,13);
		cout<<"WELCOMES YOU TO THE HELL";
		Sleep(40);
	}
    //play(1);
	for(int j=78;j>=0;j--)
	{
		effect(j,20);cout<<"-";
		effect(j,4);cout<<"-";
		Sleep(30);
	}
	Sleep(2000);
}
void playgame:: main_menu(){
	system("cls");
	frame();
	effect(25,10);
    cout << "Press [Enter] to start & create id";
    cin.get();
    playgame n;
    n.create_account();
}
void playgame::create_account(){
	playgame a;
	system("cls");
	for(int i=0;i<25;i++)
	{
		effect(5,i);
		cout<<"|";
		effect(75,i);
		cout<<"|";
	}
	effect(7,2);
	string nameplayer;
    vector<string> vname;
    cout << "Enter your name : ";
    getline(cin,nameplayer);
    vname.push_back(nameplayer); 
	effect(35,15);
	cout<<" SUBMIT";
	char c;
	c=getche();
	effect(10,23);
	cout<<"Loading";
	Sleep(400);
	cout<<".";
	Sleep(400);
	cout<<".";
	Sleep(400);
	cout<<".";
	Sleep(400);	
}
int main(){
    namegame();
    playgame x;
    x.main_menu();
    return 0;
}