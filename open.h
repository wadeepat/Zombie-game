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
void frame(){
	int i,j=115;
	for(i = 40;i<115,j>=40;i++,j--)
	{
		effect(i,2);
		Sleep(10);
		cout<<"_";
		effect(j,18);
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
	for(int i=0;i<9;i++){
		effect(5,i);
		cout << "+++++++     ++++         +++++++             ++++++              ++++++++++     +++++++         +++++++    +++++       +++++           +++++++++";
		Sleep(30);
	}
	for(int i=0;i<8;i++){
		effect(5,i);
		cout << "  +       +++    +        ++++           +++         +              ++++           ++++         ++++         +       +++   +             ++++";
		Sleep(30);
	}
	for(int i=0;i<7;i++){
		effect(5,i);
		cout << "  +      +++      +       ++++          +++          +              ++++            +++++++++++++++          +      +++    +             ++++";
		Sleep(30);
	}
	for(int i=0;i<6;i++){
		effect(5,i);
		cout << "  +     +++        +      ++++         ++++          +              ++++             ++++     ++++           +     +++     +             ++++";
		Sleep(30);
	}
	for(int i=0;i<5;i++){
		effect(5,i);
		cout << "  +    +++          +     ++++         ++++          +              ++++              ++++   ++++            +    +++      +             ++++";
		Sleep(30);
	}
	for(int i=0;i<4;i++){
		effect(5,i);
		cout << "  +   +++            +    ++++         ++++          +              ++++               ++++ ++++             +   +++       +             ++++";
		Sleep(30);
	}
	for(int i=0;i<3;i++){
		effect(5,i);
		cout << "  +  +++              +   ++++         ++++          +              ++++                +++++++              +  +++        +             ++++";
		Sleep(30);
	}
	for(int i=0;i<2;i++){
		effect(5,i);
		cout << "  + +++                +  ++++         ++++          +              ++++                 +++++               + +++         +             ++++";
		Sleep(30);
	}
	for(int i=0;i<1;i++){
		effect(5,i);
    	cout << "+++++++                  +++++++     ++++++++      ++++++      ++++++++++++++              +               +++++++      +++++++     ++++++++++++++";
		Sleep(30);
	}
	Sleep(2000);
system("cls");
}
void playgame:: main_menu(){
	int j,i,x,y;
	for(i=38;i<75;i++){
		effect(i,10);cout<<" ";
		cout<<"MUTANT";
		Sleep(40);
	}
    //play(1);
	for(int j=115;j>=40;j--){
		effect(j,18);cout<<"-";
		effect(j,2);cout<<"-";
		Sleep(30);
	}
	Sleep(2000);
	system("cls");
	frame();
	effect(66,10);
    cout << "Press [Enter] to start";
    cin.get();
    playgame n;
    n.create_account();
}
void playgame::create_account(){
	playgame a;
	system("cls");
	for(int i=5;i<23;i++)
	{
		effect(45,i);
		cout<<"|";
		effect(101,i);
		cout<<"|";
	}
	effect(47,7);
	string nameplayer;
    cout << "Enter your name : ";
    getline(cin,nameplayer);
	ifstream f("player.txt");
    ofstream player;
    string text;
    player.open("D:\\Zombie-game\\player.txt",ios::app);
	while(getline(f,text)){
        player << text << "\n" ;
    }
    player << nameplayer << "\n";
    player.close();
	effect(70,14);
	cout<<" SUBMIT";
	char c;
	c=getche();
	effect(70,18);
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
    playgame r;
    r.main_menu();
}