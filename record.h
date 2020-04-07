#include<fstream>
#include<iostream>
#include<vector>
#include<string>
#include<Windows.h>
#include<iomanip>
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

    cout<<"------------------------------------------------------------------------\n";
    cout<<"|                                                                      |\n";
    cout<<"|                           | SCORE RECORD |                           |\n";
    cout<<"|                                                                      |\n";
    cout<<"|             NAME                                    SCORE            |\n";
    cout<<"|                                                                      |\n";
    cout<<"------------------------------------------------------------------------\n";
    for (int k = 0; k < 10; k++){
        if(k > v_name.size()-1){;
        }else{ 
            cout << "|"<< setw(17) << v_name[k] << "\t\t\t\t\t" << v_score[k] << "              |\n";
            cout<<"------------------------------------------------------------------------\n";
        }   
    }
}