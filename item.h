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

void missioncleared(){
    system("cls");
    cout<<endl<<endl<<endl<<endl<<endl;
    cout<<"\t\t\t\t\t\t\t------------------------------------------------------------------------\n";
    cout<<"\t\t\t\t\t\t\t|                                                                      |\n";
    cout<<"\t\t\t\t\t\t\t|                                                                      |\n";
    cout<<"\t\t\t\t\t\t\t|                                                                      |\n";
    cout<<"\t\t\t\t\t\t\t|                                                                      |\n";
    cout<<"\t\t\t\t\t\t\t|                                                                      |\n";
    cout<<"\t\t\t\t\t\t\t|    ##       ##  ######  ######  ######  ######  ######  ###    ##    |\n";
    cout<<"\t\t\t\t\t\t\t|    ###     ###    ##    ##      ##        ##    ##  ##  ## ##  ##    |\n";
    cout<<"\t\t\t\t\t\t\t|    ## #   # ##    ##    ######  ######    ##    ##  ##  ##  ## ##    |\n";
    cout<<"\t\t\t\t\t\t\t|    ##  # #  ##    ##        ##      ##    ##    ##  ##  ##   ####    |\n";
    cout<<"\t\t\t\t\t\t\t|    ##   #   ##  ######  ######  ######  ######  ######  ##    ###    |\n";
    cout<<"\t\t\t\t\t\t\t|                                                                      |\n";
    cout<<"\t\t\t\t\t\t\t|                                                                      |\n";
    cout<<"\t\t\t\t\t\t\t|                                                                      |\n";
    cout<<"\t\t\t\t\t\t\t|                                                                      |\n";
    cout<<"\t\t\t\t\t\t\t|                                                                      |\n";
    cout<<"\t\t\t\t\t\t\t------------------------------------------------------------------------";
    Sleep(2000);
    system("cls");
    cout<<endl<<endl<<endl<<endl<<endl;
    cout<<"\t\t\t\t\t\t\t------------------------------------------------------------------------\n";
    cout<<"\t\t\t\t\t\t\t|                                                                      |\n";
    cout<<"\t\t\t\t\t\t\t|                                                                      |\n";
    cout<<"\t\t\t\t\t\t\t|                                                                      |\n";
    cout<<"\t\t\t\t\t\t\t|                                                                      |\n";
    cout<<"\t\t\t\t\t\t\t|                                                                      |\n";
    cout<<"\t\t\t\t\t\t\t|    ######  ##      ######      ##      #######   ######   #####      |\n";
    cout<<"\t\t\t\t\t\t\t|   ##       ##      ##         ####     ##    ##  ##       ##   ##    |\n";
    cout<<"\t\t\t\t\t\t\t|   ##       ##      ######    ##  ##    #######   ######   ##   ##    |\n";
    cout<<"\t\t\t\t\t\t\t|   ##       ##      ##       ########   ##   ##   ##       ##   ##    |\n";
    cout<<"\t\t\t\t\t\t\t|    ######  ######  ######  ##      ##  ##    ##  ######   #####      |\n";
    cout<<"\t\t\t\t\t\t\t|                                                                      |\n";
    cout<<"\t\t\t\t\t\t\t|                                                                      |\n";
    cout<<"\t\t\t\t\t\t\t|                                                                      |\n";
    cout<<"\t\t\t\t\t\t\t|                                                                      |\n";
    cout<<"\t\t\t\t\t\t\t|                                                                      |\n";
    cout<<"\t\t\t\t\t\t\t------------------------------------------------------------------------";
    Sleep(4000);
}
void missionfailed(){
    system("cls");
    cout<<endl<<endl<<endl<<endl<<endl;
    cout<<"\t\t\t\t\t\t\t------------------------------------------------------------------------\n";
    cout<<"\t\t\t\t\t\t\t|                                                                      |\n";
    cout<<"\t\t\t\t\t\t\t|                                                                      |\n";
    cout<<"\t\t\t\t\t\t\t|                                                                      |\n";
    cout<<"\t\t\t\t\t\t\t|                                                                      |\n";
    cout<<"\t\t\t\t\t\t\t|                                                                      |\n";
    cout<<"\t\t\t\t\t\t\t|    ##       ##  ######  ######  ######  ######  ######  ###    ##    |\n";
    cout<<"\t\t\t\t\t\t\t|    ###     ###    ##    ##      ##        ##    ##  ##  ## ##  ##    |\n";
    cout<<"\t\t\t\t\t\t\t|    ## #   # ##    ##    ######  ######    ##    ##  ##  ##  ## ##    |\n";
    cout<<"\t\t\t\t\t\t\t|    ##  # #  ##    ##        ##      ##    ##    ##  ##  ##   ####    |\n";
    cout<<"\t\t\t\t\t\t\t|    ##   #   ##  ######  ######  ######  ######  ######  ##    ###    |\n";
    cout<<"\t\t\t\t\t\t\t|                                                                      |\n";
    cout<<"\t\t\t\t\t\t\t|                                                                      |\n";
    cout<<"\t\t\t\t\t\t\t|                                                                      |\n";
    cout<<"\t\t\t\t\t\t\t|                                                                      |\n";
    cout<<"\t\t\t\t\t\t\t|                                                                      |\n";
    cout<<"\t\t\t\t\t\t\t------------------------------------------------------------------------";
    Sleep(2000);
    system("cls");
    cout<<endl<<endl<<endl<<endl<<endl;
    cout<<"\t\t\t\t\t\t\t------------------------------------------------------------------------\n";
    cout<<"\t\t\t\t\t\t\t|                                                                      |\n";
    cout<<"\t\t\t\t\t\t\t|                                                                      |\n";
    cout<<"\t\t\t\t\t\t\t|                                                                      |\n";
    cout<<"\t\t\t\t\t\t\t|                                                                      |\n";
    cout<<"\t\t\t\t\t\t\t|                                                                      |\n";
    cout<<"\t\t\t\t\t\t\t|          ######     ##      ######  ##      ######  #####            |\n";
    cout<<"\t\t\t\t\t\t\t|          ##        ####       ##    ##      ##      ##   ##          |\n";
    cout<<"\t\t\t\t\t\t\t|          ######   ##  ##      ##    ##      ######  ##   ##          |\n";
    cout<<"\t\t\t\t\t\t\t|          ##      ########     ##    ##      ##      ##   ##          |\n";
    cout<<"\t\t\t\t\t\t\t|          ##     ##      ##  ######  ######  ######  #####            |\n";
    cout<<"\t\t\t\t\t\t\t|                                                                      |\n";
    cout<<"\t\t\t\t\t\t\t|                                                                      |\n";
    cout<<"\t\t\t\t\t\t\t|                                                                      |\n";
    cout<<"\t\t\t\t\t\t\t|                                                                      |\n";
    cout<<"\t\t\t\t\t\t\t|                                                                      |\n";
    cout<<"\t\t\t\t\t\t\t------------------------------------------------------------------------";
    Sleep(4000);
}

void frame(){
    gotoxy(34+48,5);                       cout<<"-----------------------------";
    gotoxy(34+48,6);                       cout<<"|                           |";
    gotoxy(34+48,7);                       cout<<"|                           |";
    gotoxy(34+48,8);                       cout<<"|                           |";
    gotoxy(34+48,9);                       cout<<"|                           |";
    gotoxy(34+48,10);                      cout<<"|                           |";
    gotoxy(34+48,11);                      cout<<"|                           |";
    gotoxy(34+48,12);                      cout<<"|                           |";
    gotoxy(34+48,13);                      cout<<"|                           |";
    gotoxy(34+48,14);                      cout<<"-----------------------------";
}
void frame2(){
    gotoxy(34+48,5);                       cout<<"-----------------------------";
    gotoxy(34+48,6);                       cout<<"|                           |";
    gotoxy(34+48,7);                       cout<<"|                           |";
    gotoxy(34+48,8);                       cout<<"|                           |";
    gotoxy(34+48,9);                       cout<<"|                           |";
    gotoxy(34+48,10);                      cout<<"|     Zombie  is here!      |";
    gotoxy(34+48,11);                      cout<<"|                           |";
    gotoxy(34+48,12);                      cout<<"|                           |";
    gotoxy(34+48,13);                      cout<<"|                           |";
    gotoxy(34+48,14);                      cout<<"|                           |";
    gotoxy(34+48,15);                      cout<<"-----------------------------";
}
void spinach(){
    textcolor(10,0);gotoxy(35+48,6);       cout<<"          *                ";
    gotoxy(35+48,7);                       cout<<"         ****              ";
    gotoxy(35+48,8);                       cout<<"         *****             ";
    gotoxy(35+48,9);                       cout<<"          ***    **        ";
    gotoxy(35+48,10);textcolor(2,0);       cout<<"            *  ***         ";
    gotoxy(35+48,11);                      cout<<"             **            ";
    gotoxy(35+48,12);                      cout<<"             *             ";
    gotoxy(35+48,13);textcolor(6,0);       cout<<"    You found a spinach.   "; textcolor(7,0);
}
void chilli(){
    textcolor(10,0);gotoxy(35+48,6);       cout<<"               *          ";
    gotoxy(35+48,7);                       cout<<"               *          ";
    textcolor(12,0);gotoxy(35+48,8);       cout<<"              **          ";
    gotoxy(35+48,9);                       cout<<"             ***          ";
    gotoxy(35+48,10);                      cout<<"            ***           ";
    gotoxy(35+48,11);                      cout<<"           **             ";
    gotoxy(35+48,12);                      cout<<"         *                ";
    gotoxy(35+48,13);textcolor(6,0);       cout<<"    You found a chilli.   "; textcolor(7,0);
}

void mangosteen(){
    textcolor(13,0);gotoxy(35+48,8);       cout<<"            ***           ";
    gotoxy(35+48,9);                       cout<<"          *******         ";
    gotoxy(35+48,10);                      cout<<"          *******         ";
    gotoxy(35+48,11);                      cout<<"            ***           ";
    gotoxy(35+48,12);                      cout<<"                          ";
    gotoxy(35+48,13);textcolor(6,0);       cout<<"  You found a mangosteen. "; textcolor(7,0);
}

void serumanimal(){
    textcolor(15,0);gotoxy(35+48,6);       cout<<"           ****\n";
    gotoxy(35+48,7);                       cout<<"           ****\n";
    gotoxy(35+48,8);                       cout<<"           *";textcolor(14,0);cout << "**";textcolor(15,0);cout << "*\n";
    gotoxy(35+48,9);                       cout<<"           *";textcolor(14,0);cout << "**";textcolor(15,0);cout << "*\n";
    gotoxy(35+48,10);                      cout<<"           *";textcolor(14,0);cout << "**";textcolor(15,0);cout << "*\n";
    gotoxy(35+48,11);                      cout<<"           *";textcolor(14,0);cout << "**";textcolor(15,0);cout << "*\n";
    gotoxy(35+48,12);                      cout<<"            **\n";
    gotoxy(35+48,13);textcolor(6,0);       cout<<" You found an animal serum. ";textcolor(7,0);
}

void firstAid(){
    gotoxy(35+48,6);                       cout<<"           *****           ";
    gotoxy(35+48,7);                       cout<<"       *************       ";
    gotoxy(35+48,8);                       cout<<"       *    ";textcolor(12,0);cout << "***    ";textcolor(7,0);cout<<"*";
    gotoxy(35+48,9);                       cout<<"       *  ";textcolor(12,0);cout << "*** ***  ";textcolor(7,0);cout << "*";
    gotoxy(35+48,10);                      cout<<"       *  ";textcolor(12,0);cout << "*** ***  ";textcolor(7,0);cout << "*";
    gotoxy(35+48,11);                      cout<<"       *    ";textcolor(12,0);cout << "***    ";textcolor(7,0);cout << "*";
    gotoxy(35+48,12);                      cout<<"       *************";
    gotoxy(35+48,13);textcolor(6,0);       cout<<"   You found a first aid.  "; textcolor(7,0);
}

void bomb(){
    textcolor(14,0);gotoxy(35+48,7);       cout<<"              *";               
    gotoxy(35+48,8);textcolor(4,0);        cout<<"             *";                
    gotoxy(35+48,9);                       cout<<"           ***"; 
    gotoxy(35+48,10);                      cout<<"         **";textcolor(8,0);cout << "*";textcolor(4,0);cout << "*";textcolor(8,0);cout << "*";textcolor(4,0);cout << "**\n";  
    gotoxy(35+48,11);                      cout<<"         **";textcolor(8,0);cout << "*";textcolor(4,0);cout << "*";textcolor(8,0);cout << "*";textcolor(4,0);cout << "**\n";
    gotoxy(35+48,12);                      cout<<"           ***";  
    gotoxy(35+48,13);textcolor(6,0);       cout<<"     You found a bomb.     "; textcolor(7,0);                                                                                            
}

void m16(){
    textcolor(8,0);gotoxy(35+48,6);        cout<<"                    **     ";
    gotoxy(35+48,7);                       cout<<"      ****************     ";
    gotoxy(35+48,8);                       cout<<" ************************* ";
    gotoxy(35+48,9);                       cout<<" ************************* ";
    gotoxy(35+48,10);                      cout<<" ***  *********";
    gotoxy(35+48,11);                      cout<<" ***  **";textcolor(7,0);cout << "**";textcolor(8,0);cout << "*     ***";
    gotoxy(35+48,12);                      cout<<"       ***        ***      ";
    gotoxy(35+48,13);textcolor(6,0);       cout<<"      You found a M16.     "; textcolor(7,0);

}   
 
void bazooka(){
    textcolor(4,0);gotoxy(35+48,6);        cout<< "                 **";
    gotoxy(35+48,7);                       cout<< " **              **";
    gotoxy(35+48,8);                       cout<< " *************************";
    gotoxy(35+48,9);                       cout<< " *************************";
    gotoxy(35+48,10);                      cout<< " **  ***************    **";
    gotoxy(35+48,11);                      cout<< "     **";textcolor(7,0);cout << "**";textcolor(4,0);cout << "*      ***";
    gotoxy(35+48,12);                      cout<< "      ***       ***";
    gotoxy(35+48,13);textcolor(6,0);       cout<<"    You found a bazooka."; textcolor(7,0);
}