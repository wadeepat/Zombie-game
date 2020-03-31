#include<fstream>
#include<iostream>
#include<vector>
#include<string>
#include<Windows.h>
#include"item.h"
using namespace std;

void showscore(int score){
    system("cls");
    cout<<"------------------------------------------------------------------------\n";
    cout<<"|                                                                      |\n";
    cout<<"|                                                                      |\n";
    cout<<"|                                                                      |\n";
    cout<<"|                                                                      |\n";
    cout<<"|                                                                      |\n";
    cout<<"|                                                                      |\n";
    cout<<"|                                                                      |\n";
    cout<<"|                                                                      |\n";
    cout<<"|                                                                      |\n";
    cout<<"|                                                                      |\n";
    cout<<"|                                                                      |\n";
    cout<<"|                                                                      |\n";
    cout<<"|                                                                      |\n";
    cout<<"|                                                                      |\n";
    cout<<"|                                                                      |\n";
    cout<<"------------------------------------------------------------------------";
    gotoxy(26,7);cout<<" Your score is";Sleep(1000);cout<<".";Sleep(800);cout<<".";Sleep(800);cout<<".";
    gotoxy(26,8);cout<<"------------------";
    gotoxy(26,9);cout<<"|  Score: ";cout<<setw(5)<<setfill('0')<<score<<"  |";
    gotoxy(26,10);cout<<setfill(' ')<<"------------------\n";
    Sleep(4000);
}
void showrecord(){
    
    ifstream readname("player.txt");
    vector<string>v_name; vector<int>v_score; string text;
    while(getline(readname,text)){
        v_name.push_back(text);
    }
    readname.close();
    ifstream readscore("score.txt");
    while(getline(readscore,text)){
        v_score.push_back(stoi(text.c_str()));
    }
    readscore.close();

    for(int i=0;i<10;i++){
        for(int j=0;j<v_score.size();j++) 
    }


}