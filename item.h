#include<iostream>
#include<conio.h>
#include<Windows.h>
#include<iomanip>
#define textcolor(txt,back) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), back*16+txt)
using namespace std;

void gotoxy(int x,int y){
    COORD coord;
    coord.X=x;
    coord.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}
void frame(){
    gotoxy(34,5);                       cout<<"-----------------------------";
    gotoxy(34,6);                       cout<<"|                           |";
    gotoxy(34,7);                       cout<<"|                           |";
    gotoxy(34,8);                       cout<<"|                           |";
    gotoxy(34,9);                       cout<<"|                           |";
    gotoxy(34,10);                      cout<<"|                           |";
    gotoxy(34,11);                      cout<<"|                           |";
    gotoxy(34,12);                      cout<<"|                           |";
    gotoxy(34,13);                      cout<<"|                           |";
    gotoxy(34,14);                      cout<<"-----------------------------";
}
void spinach(){
    textcolor(10,0);gotoxy(35,6);       cout<<"          *                ";
    gotoxy(35,7);                       cout<<"         ****              ";
    gotoxy(35,8);                       cout<<"         *****             ";
    gotoxy(35,9);                       cout<<"          ***    **        ";
    gotoxy(35,10);textcolor(2,0);       cout<<"            *  ***         ";
    gotoxy(35,11);                      cout<<"             **            ";
    gotoxy(35,12);                      cout<<"             *             ";
    gotoxy(35,13);textcolor(6,0);       cout<<"    You found a spinach.   "; gotoxy(35,13);textcolor(7,0);
}
void chilli(){
    textcolor(10,0);gotoxy(35,6);       cout<<"               *          ";
    gotoxy(35,7);                       cout<<"               *          ";
    textcolor(12,0);gotoxy(35,8);       cout<<"              **          ";
    gotoxy(35,9);                       cout<<"             ***          ";
    gotoxy(35,10);                      cout<<"            ***           ";
    gotoxy(35,11);                      cout<<"           **             ";
    gotoxy(35,12);                      cout<<"         *                ";
    gotoxy(35,13);textcolor(6,0);       cout<<"    You found a chilli.   "; gotoxy(35,13);textcolor(7,0);
}