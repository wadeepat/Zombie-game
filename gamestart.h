#include<iostream>
#include<conio.h>
#include<Windows.h>
#include<iomanip>
#include<ctime>
#include<vector>
#include"item.h"
#include"callzombie.h"
#include<fstream>
#define textcolor(txt,back) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), back*16+txt)
using namespace std;

HANDLE h=GetStdHandle(STD_OUTPUT_HANDLE);
char map[17][79]={
    "###############################       ########################################",
    "#@                           ###########                ##      *           ##",                                                
    "##               ##                                                         ##",                                                
    "#################################    ##################################    ###",                                                
    "##                         *   ##    ##               *              ##    ###",                                                 
    "##                     ##########    ##                ################    ###",                                                
    "#####    ##########                  ##                                     ##",                                                
    "##       ##      ##                  ##################################     ##",                                              
    "##       ##      ##                                                  ##     ##",                                                 
    "##               ########################           ###################     ##",                                                 
    "##     ######    ##                                 ##                      ##",                                                  
    "##     ##  ##    #############################      ##     ##               ##",                                                  
    "##  *  ##  ##                          *    ##      ##     ########          |",                                                  
    "#########  ##                               ##      ##         * ##         ##",
    "##         #########################        ##      ###############      #####",
    "######                                                                   #####",
    "##   #########################################################################"
};

char map3[17][79]={
    "##############################################################################",
    "|                      ## *                             ##      *           ##",                                                
    "##                     ##      ##################                           ##",                                                
    "##                     ##########              ##       ##                  ##",                                                
    "##                                             ##       ##                  ##",                                                 
    "##*                                            ##       #########   ##########",                                                
    "###################   ##############           ##                           ##",                                                
    "##               ##   ##        * ##           ##############               ##",                                              
    "##               ##        #########                       ##     #####     ##",                                                 
    "##               ##                                        ##     ## *      ##",                                                 
    "##                                                                ##        ##",                                                  
    "##     #######################################             #########        ##",                                                  
    "##  *  ##                                   ##                              ##",                                                  
    "####   ###########                          ## *                            ##",
    "##              ##                          ############################    ##",
    "##              ##*                                                         ##",
    "##############################################################################"
};

char map2[17][79]={
    "##############################################################################",
    "|                ## *    ##                            ##          *        ##",                                                
    "##               ##      ##                                                 ##",                                                
    "##               ##      ##                            ##                   ##",                                                
    "##               ##                         *          ##                   ##",                                                 
    "##               ##########                   ###########      ###############",                                                
    "#########        ####                         ##                            ##",                                                
    "##    *##        ##          *                ##                            ##",                                              
    "##     ##        ##                           ##################            ##",                                                 
    "##     ##        ##                                                         ##",                                                 
    "##     ##        ##                                                         ##",                                                  
    "##               #########    ##############                                ##",                                                  
    "##                    ## *    ##                     #######                 |",                                                  
    "##                    ##########                     ##   ##  *             ##",
    "##                                                   ##   ############      ##",
    "##                                                   ##             ##      ##",
    "#######################################################             ##########"
};

char map1[17][79]={
    "###############################       ########################################",
    "#@                           ###########                ##      *           ##",                                                
    "##               ##                                                         ##",                                                
    "#################################    ##################################    ###",                                                
    "##                         *   ##    ##               *              ##    ###",                                                 
    "##                     ##########    ##                ################    ###",                                                
    "#####    ##########                  ##                                     ##",                                                
    "##       ##      ##                  ##################################     ##",                                              
    "##       ##      ##                                                  ##     ##",                                                 
    "##               ########################           ###################     ##",                                                 
    "##     ######    ##                                 ##                      ##",                                                  
    "##     ##  ##    #############################      ##     ##               ##",                                                  
    "##  *  ##  ##                          *    ##      ##     ########          |",                                                  
    "#########  ##                               ##      ##         * ##         ##",
    "##         #########################        ##      ###############      #####",
    "######                                                                   #####",
    "##   #########################################################################"
};
void charactordata(string name,int hp,int atk,int itemquest);
void showscore(int score);
void showtime(int runtime);
void updatetime(int runtime);
void drawmap(int score,int runtime);
void changemap(int &locmap,int &x,int &y,int score,int runtime);
void founditem(vector<string> &item);
void move(char &press,int &x,int&y,int &score,int &locmap,int runtime,vector<string>&,string,int &,int &,int &);
vector<string> createitem();

void gamestart(string nameplayer,int &score){
    
    system("cls");
    bool gamerunning=true;
    time_t start,stop;
    time(&start);
    int runtime=0;
    int x=1;
    int y=1;
    int locmap=1;
    char press; int check=0;
    int hp=100; int itemquest=0; int atk=10;
    string name=nameplayer;
    vector<string>item=createitem();
    drawmap(score,runtime);
    charactordata(name,hp,atk,itemquest); showscore(score);
    while(gamerunning){
        time(&stop);
        runtime=stop-start;
        if(runtime>=120){missionfailed();gamerunning=false;};
        if(runtime%20==0 && runtime!=0){    //zombie
            if(rand()%3==0){
                ClearConsoleInputBuffer(); frame2();
                Sleep(1000);ClearConsoleInputBuffer();
                system("cls");ZombieZone(name,hp,atk,check);system("cls");if(check==1)score+=250;check=0;//scorefromzombie
                drawmap(score,runtime);charactordata(name,hp,atk,itemquest);showscore(score);
            }
        }
        showtime(runtime); 
        if(GetAsyncKeyState(0x57)){                       //move
            press='w';
            move(press,x,y,score,locmap,runtime,item,name,hp,atk,itemquest);
        }
        else if(GetAsyncKeyState(0x41)){
            press='a';
            move(press,x,y,score,locmap,runtime,item,name,hp,atk,itemquest);
        }
        else if(GetAsyncKeyState(0x53)){
            press='s';
            move(press,x,y,score,locmap,runtime,item,name,hp,atk,itemquest);
        }
        else if(GetAsyncKeyState(0x44)){
            press='d';
            move(press,x,y,score,locmap,runtime,item,name,hp,atk,itemquest);
        }
        if(GetAsyncKeyState(0x46))gamerunning=false;
        if(hp==0){missionfailed();gamerunning=false;}
        if(itemquest==4){score+=1500;missioncleared();gamerunning=false;}
        Sleep(80);  
    }
    ofstream recordscore("score.txt");
    recordscore<<score;
    recordscore.close();
}



vector<string> createitem(){
    vector<string>item;
    item.push_back("spinach");
    item.push_back("chilli");
    item.push_back("mangosteen");
    item.push_back("serumanimal");
    for(int i=0;i<2;i++)item.push_back("m16");
    item.push_back("bazooka");
    for(int i=0;i<10;i++)item.push_back("firstAid");
    for(int i=0;i<4;i++)item.push_back("bomb");
    return item;
}

void charactordata(string name,int hp,int atk,int itemquest){
    
    gotoxy(9,22);textcolor(4,0); cout << " *****"; textcolor(14,0); cout << "         *   "; 
    gotoxy(9,23);textcolor(4,0); cout << "*******"; textcolor(14,0); cout << "       **   "; 
    gotoxy(9,24);textcolor(4,0); cout << "**"; textcolor(1,0); cout << "* *"; textcolor(4,0); cout << "**"; textcolor(14,0); cout << "      ***   ";
    gotoxy(9,25);textcolor(4,0); cout << " *****"; textcolor(14,0); cout << "      ***    ";
    gotoxy(9,26);textcolor(4,0); cout << "**";  textcolor(1,0); cout << "***"; textcolor(4,0); cout <<"**";textcolor(14,0); cout << "   ******   ";
    gotoxy(9,27);textcolor(4,0); cout << "**"; textcolor(1,0); cout << "***"; textcolor(4,0); cout <<"**"; textcolor(14,0); cout << "    **\n";
    gotoxy(9,28);textcolor(4,0); cout << "*******"; textcolor(14,0); cout << "   **"; textcolor(7,0);

    gotoxy(29,22);cout<<"NAME: "<<name;
    gotoxy(29,23);cout<<"HP: "<<hp<<"/100";
    gotoxy(29,24);cout<<"Attack: "<<atk;
    gotoxy(29,25);cout<<"ITEM: "<<itemquest;
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
        x=1;
        y=1;
        map[1][1]='@';
        locmap=2;
    
    }
    else if(locmap==2 && x==1 && y==1){
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
    else if(locmap==2 && x==12 && y==76){
        for(int i=0;i<17;i++){
            for(int j=0;j<79;j++){
                map2[i][j]=map[i][j];
            }
        }
        for(int i=0;i<17;i++){
            for(int j=0;j<79;j++){
                map[i][j]=map3[i][j];
            }
        }
        x=1;
        y=1;
        map[1][1]='@';
        locmap=3;
    }else if(locmap==3 && x==1 && y==1){
        for(int i=0;i<17;i++){
            for(int j=0;j<79;j++){
                map3[i][j]=map[i][j];
            }
        }
        for(int i=0;i<17;i++){
            for(int j=0;j<79;j++){
                map[i][j]=map2[i][j];
            }
        }
        x=12;
        y=76;
        map[12][76]='@';
        locmap=2;
    }
    system("cls");
    drawmap(score,runtime); 
}

void founditem(vector<string> &item,int &hp,int &atk,int &itemquest,int &score){
    int n=rand()%item.size();
    frame();
    if(item[n]=="spinach"){
        spinach();
        itemquest++;score+=1000;
    }else if(item[n]=="chilli"){
        chilli();
        itemquest++;score+=1000;
    }else if(item[n]=="mangosteen"){
        mangosteen();
        itemquest++;score+=1000;
    }else if(item[n]=="serumanimal"){
        serumanimal();
        itemquest++;score+=1000;
    }else if(item[n]=="firstAid"){
        firstAid();
        if(hp+20>100)hp=100;else hp+=20;score+=50;
    }
    else if(item[n]=="bomb"){
        bomb();
        if(hp-30<0)hp=0;else hp-=30; score+=100;
    }else if(item[n]=="m16"){
        m16();
        if(atk<20)atk=20;
        score+=30;
    }else if(item[n]=="bazooka"){
        bazooka();
        atk=30;
        score+=50;
    }      
    item.erase(item.begin()+n);
}

void move(char &press,int &x,int&y,int &score,int &locmap,int runtime,vector<string> &item,string name,int &hp,int &atk,int &itemquest){
    if(press=='w'){
        if(map[x-1][y]=='|'){changemap(locmap,x,y,score,runtime);charactordata(name,hp,atk,itemquest);}
        else if(map[x-1][y]!='#'){
            if(map[x-1][y]=='*') {
                founditem(item,hp,atk,itemquest,score); Sleep(1500);
                drawmap(score,runtime);charactordata(name,hp,atk,itemquest);}
            map[x][y]=' ';
            gotoxy(8+y,3+x);
            cout<<' ';
            x=x-1;
            gotoxy(8+y,3+x);
            textcolor(4,0);cout<<'@';textcolor(7,0);
        }
    }
    else if(press=='a'){
        if(map[x][y-1]=='|'){changemap(locmap,x,y,score,runtime);charactordata(name,hp,atk,itemquest);}
        
        else if(map[x][y-1]!='#'){
            if(map[x][y-1]=='*') {
                founditem(item,hp,atk,itemquest,score); Sleep(1500);
                drawmap(score,runtime);charactordata(name,hp,atk,itemquest);}
            map[x][y]=' ';
            gotoxy(8+y,3+x);
            cout<<' ';
            y=y-1;
            gotoxy(8+y,3+x);
            textcolor(4,0);cout<<'@';textcolor(7,0);
        }
    }
    else if(press=='s'){
        if(map[x+1][y]=='|'){changemap(locmap,x,y,score,runtime);charactordata(name,hp,atk,itemquest);}
        else if(map[x+1][y]!='#'){
            if(map[x+1][y]=='*') {
            founditem(item,hp,atk,itemquest,score); Sleep(1500);
            drawmap(score,runtime);charactordata(name,hp,atk,itemquest);}
            map[x][y]=' ';
            gotoxy(8+y,3+x);
            cout<<' ';
            x=x+1;
            gotoxy(8+y,3+x);
            textcolor(4,0);cout<<'@';textcolor(7,0);
        }
    }
    else if(press=='d'){
        if(map[x][y+1]=='|'){changemap(locmap,x,y,score,runtime);charactordata(name,hp,atk,itemquest);}
        else if(map[x][y+1]!='#'){
            if(map[x][y+1]=='*') {
            founditem(item,hp,atk,itemquest,score); Sleep(1500); 
            drawmap(score,runtime);charactordata(name,hp,atk,itemquest);}
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

