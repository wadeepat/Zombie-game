#include<iostream>
#include<conio.h>
#include<Windows.h>
#include<iomanip>
#define textcolor(txt,back) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), back*16+txt)
using namespace std;

HANDLE h=GetStdHandle(STD_OUTPUT_HANDLE);

void gotoxy(int x,int y){
    COORD coord;
    coord.X=x;
    coord.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}

// char map0[10][1]={
//     "#######   #######",
//     "##             ##",
//     "##             ##",
//     "#################",
// };
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
    "## * ##                                                                     ##",
    "##############################################################################"
};

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
    cout<<setw(89)<<"------------------  \n";
    cout<<setw(78)<<"|  Score: ";cout<<setw(5)<<setfill('0')<<score<<"  |\n";
    cout<<setfill(' ')<<setw(87)<<"------------------\n";
}

void founditem(){

}
void drawmap(int score){
    showscore(score);
    for(int i=0;i<17;i++){
    cout<<"\t";
        for(int j=0;j<79;j++){
            if(map[i][j]=='@')SetConsoleTextAttribute(h,4);
            if(map[i][j]=='*')textcolor(6,0);
            cout<<map[i][j];
            if(map[i][j]=='@' || map[i][j]=='*')SetConsoleTextAttribute(h,7);
        }
      cout<<endl;      
    }
    cout<<endl;
    charactordata("Liw",100,"NORMAL","NORMAL",1);
}
void changemap(){

}
void move(char &press,int &x,int&y,int score){
    if(press=='w'){
        if(map[x-1][y]=='|')
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
    drawmap(score);
}



bool gamerunning=true;

int main(){
    system("cls");
    int x=1;
    int y=1;
    int score,locmap;
    char key,press;
    drawmap(score);
    
    while(gamerunning){
        key=getch();
        press=key;
        if(press=='w'|| press=='a'|| press=='s'|| press=='d')move(press,x,y,score);
        if(key=='f')gamerunning=false;  
    }
}

