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

char map[17][129]={
    "#########################      #################################################################################################",
    "|@                     ##      ##                                                                                             ##",
    "##                     ##      ##                                                                                             ##",
    "##                     ##########                                                                                             ##",
    "##                                                                                                                            ##",
    "##                                                                                                                            ##",
    "##                                                                                                                            ##",
    "##                                                                                                                            ##",
    "##                                                                                                                            ##",
    "##                                                                                                                            ##",
    "##                                                                                                                            ##",
    "##                                                                                                                            ##",
    "##                                                                                                                            ##",
    "##                                                                                                                            ##",
    "##                                                                                                                            ##",
    "##                                                                                                                            ##",
    "################################################################################################################################"
};

void drawmap(){
    for(int i=0;i<17;i++){
        for(int j=0;j<128;j++){
            if(map[i][j]=='@')SetConsoleTextAttribute(h,4);
            cout<<map[i][j];
            if(map[i][j]=='@')SetConsoleTextAttribute(h,7);
        }
      cout<<endl;      
    }
}

void move(char &press,int &x,int&y){
    if(press=='w'){
        if(map[x-1][y]!='#' && map[x-1][y]!='|'){
            map[x][y]=' ';
            x=x-1;
            map[x][y]='@';
        }
    }
    if(press=='a'){
        if(map[x][y-1]!='#' && map[x][y-1]!='|'){
            map[x][y]=' ';
            y=y-1;
            map[x][y]='@';
        }
    }
    if(press=='s'){
        if(map[x+1][y]!='#' && map[x+1][y]!='|'){
            map[x][y]=' ';
            x=x+1;
            map[x][y]='@';
        }
    }
    if(press=='d'){
        if(map[x][y+1]!='#' && map[x][y+1]!='|'){
            map[x][y]=' ';
            y=y+1;
            map[x][y]='@';
        }
    }
    press=' ';
    system("cls");
    drawmap();
}

void charactor();
bool gamerunning=true;

int main(){
    system("cls");
    int x=1;
    int y=1;
    char key,press;
    drawmap();
    while(gamerunning){
        key=getch();
        press=key;
        if(press=='w'|| press=='a'|| press=='s'|| press=='d')move(press,x,y);
        if(key=='f')gamerunning=false;
    }
}

// void charactor(){ 
//     SetConsoleTextAttribute(h,7); cout<<"  ###"<<endl;
//                                   cout<<" #######"<<endl;
//     SetConsoleTextAttribute(h,2); cout<<"##########"<<endl;
//     SetConsoleTextAttribute(h,7); cout<<" ###"; SetConsoleTextAttribute(h,6); cout<<"#####"<<endl;
//     SetConsoleTextAttribute(h,5); cout<<"  ######"<<endl;
//     SetConsoleTextAttribute(h,1); cout<<"  ######";
//     SetConsoleTextAttribute(h,7);
// }