#include<iostream>
#include<conio.h>
#include<Windows.h>
#include<iomanip>
#include<ctime>
#include<vector>
#include"item.h"
#include"callzombie.h"
#define textcolor(txt,back) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), back*16+txt)
using namespace std;

HANDLE h=GetStdHandle(STD_OUTPUT_HANDLE);


char map[17][79]={
    "#########################      ###############################################",
    "#@                     ##      ##                       ##      *   *       ##",                                                
    "##                     ##      ##                                           ##",                                                
    "##                     ##########                       ##                  ##",                                                
    "##                     ##    *                          ##                  ##",                                                 
    "##                     ##########                       #########   ##########",                                                
    "###################                                                         ##",                                                
    "##    *##        ##                                                         ##",                                              
    "##     ##        ##                                                         ##",                                                 
    "##               ##                                                         ##",                                                 
    "##     ##        ##                                                         ##",                                                  
    "##     ##        #############################                              ##",                                                  
    "##  *  ##                              *    ##                               |",                                                  
    "#########                                   ##                              ##",
    "##                                          ##                              ##",
    "##                                                                          ##",
    "##############################################################################"
};

char map2[17][79]={
    "#########################      ###############################################",
    "#                      ##      ##                       ##      *   *       ##",                                                
    "##                     ##      ##                                           ##",                                                
    "##                     ##########                       ##                  ##",                                                
    "##                     ##    *                          ##                  ##",                                                 
    "##                     ##########                       #########   ##########",                                                
    "###################                                                         ##",                                                
    "##    *##        ##                                                         ##",                                              
    "##     ##        ##                                                         ##",                                                 
    "##               ##                                                         ##",                                                 
    "##     ##        ##                 *                                       ##",                                                  
    "##     ##        #############################                              ##",                                                  
    "|      ##                              *    ##                               |",                                                  
    "#########                                   ##                              ##",
    "##                                          ##                              ##",
    "## * ##                                                                     ##",
    "##############################################################################"
};
char map1[17][79]={
    "#########################      ###############################################",
    "#@                     ##      ##                       ##      *   *       ##",                                                
    "##                     ##      ##                                           ##",                                                
    "##                     ##########                       ##                  ##",                                                
    "##                     ##    *                          ##                  ##",                                                 
    "##                     ##########                       #########   ##########",                                                
    "###################                                                         ##",                                                
    "##    *##        ##                                                         ##",                                              
    "##     ##        ##                                                         ##",                                                 
    "##               ##                                                         ##",                                                 
    "##     ##        ##                                                         ##",                                                  
    "##     ##        #############################                              ##",                                                  
    "##  *  ##                              *    ##                               |",                                                  
    "#########                                   ##                              ##",
    "##                                          ##                              ##",
    "##                                                                          ##",
    "##############################################################################"
};

void charactordata(string name,int hp,string gun,string armor,int item);

void showscore(int score);
void showtime(int runtime);

void updatetime(int runtime);

void drawmap(int score,int runtime);
void changemap(int &locmap,int &x,int &y,int score,int runtime);
void founditem(vector<string> &item);
void move(char &press,int &x,int&y,int score,int &locmap,int runtime,vector<string>&);
vector<string> createitem();

void gamestart(){
    
    system("cls");
    bool gamerunning=true;
    time_t start,stop;
    time(&start);
    int runtime=0;
    int x=1;
    int y=1;
    int score=0;
    int locmap=1;
    char press;
    string name="Liw";
    vector<string>item=createitem();
    drawmap(score,runtime);
    while(gamerunning){
        time(&stop);
        runtime=stop-start;
        if(runtime==120)break;
        if(runtime%20==0 && runtime!=0){    //zombie
            if(rand()%3==0){
                frame2();
                Sleep(1000);
                system("cls");ZombieZone(name);system("cls");drawmap(score,runtime);
            }
        }
        showtime(runtime); showscore(score);
        if(GetAsyncKeyState(0x57)){                       //move
            press='w';
            move(press,x,y,score,locmap,runtime,item);
        }
        else if(GetAsyncKeyState(0x41)){
            press='a';
            move(press,x,y,score,locmap,runtime,item);
        }
        else if(GetAsyncKeyState(0x53)){
            press='s';
            move(press,x,y,score,locmap,runtime,item);
        }
        else if(GetAsyncKeyState(0x44)){
            press='d';
            move(press,x,y,score,locmap,runtime,item);
        }
    
        if(GetAsyncKeyState(0x46))gamerunning=false;
        Sleep(80);  
    }
}



vector<string> createitem(){
    vector<string>item;
    item.push_back("spinach");
    item.push_back("chilli");
    item.push_back("mangosteen");
    item.push_back("serumanimal");
    return item;
}

void charactordata(string name,int hp,string gun,string armor,int item){
    
    textcolor(4,0); cout << "\t     *****"; textcolor(14,0); cout << "         *   "; SetConsoleTextAttribute(h,7); cout<<"NAME: "<<name<<endl;
    textcolor(4,0); cout << "\t    *******"; textcolor(14,0); cout << "       **   "; SetConsoleTextAttribute(h,7); cout<<"HP: "<<hp<<endl;
    textcolor(4,0); cout << "\t    **"; textcolor(1,0); cout << "* *"; textcolor(4,0); cout << "**"; textcolor(14,0); cout << "      ***   "; SetConsoleTextAttribute(h,7); cout<<"WEAPON: "<<gun<<endl;
    textcolor(4,0); cout << "\t     *****"; textcolor(14,0); cout << "      ***    "; SetConsoleTextAttribute(h,7); cout<<"ARMOR: "<<armor<<endl;
    textcolor(4,0); cout << "\t    **";  textcolor(1,0); cout << "***"; textcolor(4,0); cout <<"**";
        textcolor(14,0); cout << "   ******   "; SetConsoleTextAttribute(h,7); cout<<"ITEM: "<<item<<endl;
    textcolor(4,0); cout << "\t    **"; textcolor(1,0); cout << "***"; textcolor(4,0); cout <<"**"; textcolor(14,0); cout << "    **\n";
    textcolor(4,0); cout << "\t    *******"; textcolor(14,0); cout << "   **"; textcolor(7,0);

}

void showscore(int score){
    gotoxy(68,0);cout<<"------------------";
    gotoxy(68,1);cout<<"|  Score: ";cout<<setw(5)<<setfill('0')<<score<<"  |";
    gotoxy(68,2);cout<<setfill(' ')<<"------------------\n";
}

void showtime(int runtime){
    gotoxy(40,0);cout<<"-----------------";
    gotoxy(40,1);cout<<"|  Time: ";cout<<setw(5)<<setfill('0')<<runtime<<"  |"<<setfill(' ');
    gotoxy(40,2);cout<<"-----------------\n";
}

void updatetime(int runtime){
    gotoxy(49,1);cout<<setw(5)<<setfill('0')<<runtime<<setfill(' ');
}

void drawmap(int score,int runtime){
    showtime(runtime); showscore(score);
    for(int i=0;i<17;i++){
    cout<<"\t";
        for(int j=0;j<79;j++){
            if(map[i][j]=='@')SetConsoleTextAttribute(h,4);
            if(map[i][j]=='*')textcolor(6,0);
            cout<<map[i][j];
            if(map[i][j]=='@'||map[i][j]=='*')SetConsoleTextAttribute(h,7);
        }
      cout<<endl;      
    }
    cout<<endl;
    charactordata("Liw",100,"NORMAL","NORMAL",1);
}
void changemap(int &locmap,int &x,int &y,int score,int runtime){
    if(locmap==1){
        for(int i=0;i<17;i++){
            for(int j=0;j<79;j++){
                map1[i][j]=map[i][j];
            }
        }
        for(int i=0;i<17;i++){
            for(int j=0;j<79;j++){
                map[i][j]=map2[i][j];
            }
        }
        x=12;
        y=1;
        map[12][1]='@';
        locmap=2;
    
    }
    else if(locmap==2 && x==12 && y==1){
        for(int i=0;i<17;i++){
            for(int j=0;j<79;j++){
                map2[i][j]=map[i][j];
            }
        }
        for(int i=0;i<17;i++){
            for(int j=0;j<79;j++){
                map[i][j]=map1[i][j];
            }
        }
        x=12;
        y=76;
        map[12][76]='@';
        locmap=1;
    }
    system("cls");
    drawmap(score,runtime); 
}

void founditem(vector<string> &item){
    int n=rand()%item.size();
    frame();
    if(item[n]=="spinach"){
        spinach();
    }else if(item[n]=="chilli"){
        chilli();
    }else if(item[n]=="mangosteen"){
    }else if(item[n]=="serumanimal"){
    }
    item.erase(item.begin()+n);
}

void move(char &press,int &x,int&y,int score,int &locmap,int runtime,vector<string> &item){
    if(press=='w'){
        if(map[x-1][y]=='|') changemap(locmap,x,y,score,runtime);
        else if(map[x-1][y]!='#'){
            if(map[x-1][y]=='*') {
                founditem(item); Sleep(1500); drawmap(score,runtime);}
            map[x][y]=' ';
            gotoxy(8+y,3+x);
            cout<<' ';
            x=x-1;
            gotoxy(8+y,3+x);
            textcolor(4,0);cout<<'@';textcolor(7,0);
        }
    }
    else if(press=='a'){
        if(map[x][y-1]=='|') changemap(locmap,x,y,score,runtime);
        
        else if(map[x][y-1]!='#'){
            if(map[x][y-1]=='*') {
                founditem(item); Sleep(1500); drawmap(score,runtime);}
            map[x][y]=' ';
            gotoxy(8+y,3+x);
            cout<<' ';
            y=y-1;
            gotoxy(8+y,3+x);
            textcolor(4,0);cout<<'@';textcolor(7,0);
        }
    }
    else if(press=='s'){
        if(map[x+1][y]=='|') changemap(locmap,x,y,score,runtime);
        else if(map[x+1][y]!='#'){
            if(map[x+1][y]=='*') {
            founditem(item); Sleep(1500); drawmap(score,runtime);}
            map[x][y]=' ';
            gotoxy(8+y,3+x);
            cout<<' ';
            x=x+1;
            gotoxy(8+y,3+x);
            textcolor(4,0);cout<<'@';textcolor(7,0);
        }
    }
    else if(press=='d'){
        if(map[x][y+1]=='|') changemap(locmap,x,y,score,runtime);
        else if(map[x][y+1]!='#'){
            if(map[x][y+1]=='*') {
            founditem(item); Sleep(1500); drawmap(score,runtime);}
            map[x][y]=' ';
            gotoxy(8+y,3+x);
            cout<<' ';
            y=y+1;
            gotoxy(8+y,3+x);
            textcolor(4,0);cout<<'@';textcolor(7,0);
        }
    }
    press=' ';
}

