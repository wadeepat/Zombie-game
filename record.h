#include<fstream>
#include<iostream>
#include<vector>
#include<string>
#include<Windows.h>
#include<iomanip>
#include"sort.h"
using namespace std;

void goxy(int x,int y){
    COORD coord;
    coord.X=x;
    coord.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}
void yourscore(int score){
    system("cls");
    cout<<endl<<endl<<endl<<endl<<endl;
    cout<<"        ------------------------------------------------------------------------\n";
    cout<<"        |                                                                      |\n";
    cout<<"        |                                                                      |\n";
    cout<<"        |                                                                      |\n";
    cout<<"        |                                                                      |\n";
    cout<<"        |                                                                      |\n";
    cout<<"        |                                                                      |\n";
    cout<<"        |                                                                      |\n";
    cout<<"        |                                                                      |\n";
    cout<<"        |                                                                      |\n";
    cout<<"        |                                                                      |\n";
    cout<<"        |                                                                      |\n";
    cout<<"        |                                                                      |\n";
    cout<<"        |                                                                      |\n";
    cout<<"        |                                                                      |\n";
    cout<<"        |                                                                      |\n";
    cout<<"        ------------------------------------------------------------------------";
    goxy(26+8,7+5);cout<<" Your score is";Sleep(1000);cout<<".";Sleep(800);cout<<".";Sleep(800);cout<<".";Sleep(800);
    goxy(26+8,8+5);cout<<"------------------";
    goxy(26+8,9+5);cout<<"|  Score: ";cout<<setw(5)<<setfill('0')<<score<<"  |";
    goxy(26+8,10+5);cout<<setfill(' ')<<"------------------\n";
    Sleep(4000);
}

void showrecord(){
    system("cls");
    ifstream readname("player.txt");
    vector<string>v_name; vector<int>v_score; string text;
    while(getline(readname,text)){
        v_name.push_back(text);
    }
    readname.close();
    ifstream readscore("score.txt");
    while(getline(readscore,text)){
        v_score.push_back(atoi(text.c_str()));
    }
    readscore.close();

    //arrage rank
    int nowscore=v_score[0];
    for(int i=0;i<v_score.size();i++){

    }
    insertionSort(v_score,v_name);
    cout<<endl<<endl<<endl<<endl;
    cout<<"        ------------------------------------------------------------------------\n";
    cout<<"        |                                                                      |\n";
    cout<<"        |                           | SCORE RECORD |                           |\n";
    cout<<"        |                                                                      |\n";
    cout<<"        |             NAME                                    SCORE            |\n";
    cout<<"        |                                                                      |\n";
    cout<<"        ------------------------------------------------------------------------\n";
    for (int k =0; k<10 && k<v_score.size(); k++){
        goxy(8+0,k+7+4);cout<<"|";goxy(8+11,k+7+4);cout<<k+1<<".";goxy(8+15,k+7+4);cout<<v_name[k];goxy(8+54,4+k+7);cout<<setw(5)<<setfill('0')<<v_score[k]<<setfill(' ');goxy(8+71,4+k+7);cout<<"|";
    }
    cout<<endl<<"        ------------------------------------------------------------------------";Sleep(4000);
    cout<<endl<<endl<<"                                  Press any key to close";
    getch();
}