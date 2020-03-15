#include<iostream>
#include<conio.h>
#include<Windows.h>
using namespace std;

HANDLE h=GetStdHandle(STD_OUTPUT_HANDLE);

void gotoxy(int x,int y){
    COORD coord;
    coord.X=x;
    coord.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}

char map[100][100]={
    "#########################      ########",
    "@                      ##      ##    ##",
    "##                     ##      ##    ##",
    "##                     ##########    ##",
    "##                                   ##",
    "#######################################"
};

void drawmap(){
    for(int i=0;i<7;i++){
            cout<<map[i]<<endl;
        }
}
bool gamerunning=true;
int main(){
    system("cls");
    int x=1;
    int y=-4;
    char key,press;
    for(int i=0;i<7;i++){
            cout<<map[i]<<endl;
        }
        
    while(gamerunning){
        key=getch();
        press=key;
        if(press=='w'|| press=='a'|| press=='s'|| press=='d'){
            if(press=='w'){
                if(map[x-1][y]!='#'){
                    map[x][y]=' ';
                    x=x-1;
                    map[x][y]='@';
                }
            }
            if(press=='a'){
                if(map[x][y-1]!='#'){
                    map[x][y]=' ';
                    y=y-1;
                    map[x][y]='@';
                }
            }
            if(press=='s'){
                if(map[x+1][y]!='#'){
                    map[x][y]=' ';
                    x=x+1;
                    map[x][y]='@';
                }
            }
            if(press=='d'){
                if(map[x][y+1]!='#'){
                    map[x][y]=' ';
                    y=y+1;
                    map[x][y]='@';
                }
            }
            press=' ';
            system("cls");
            drawmap();
        }
        if(key=='f')gamerunning=false;
    }
}