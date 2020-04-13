#include<iostream>
#include<conio.h>
#include<Windows.h>
#include<iomanip>
#define textcolor(txt,back) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), back*16+txt)
#define resetcolor() SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15)
using namespace std;


void showstory(int );
void tutorial();
// void gotoxy(int x,int y){
//     COORD coord;
//     coord.X=x;
//     coord.Y=y;
//     SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
// }

void story(){
    for(int i=0;i<500;i++){
            gotoxy(0,i);
            cout << "                                                                                ";
    }
    cout << "\n";
    int i = 1;
    showstory(i);
    i = 2;
    if(getch())showstory(i);
    i = 3;
    if(getch())showstory(i);
    i = 4;
    if(getch())showstory(i);
    if(getch())tutorial();
    if(getch()){
        for(int i=0;i<500;i++){
            gotoxy(0,i);
            cout << "                                                                                ";
        }
        textcolor(5,0);
        gotoxy(0,0);
        cout << "\n\n\n\n\n\n\n\n\n";
        cout << "                                                        ..............................................................................\n";
        Sleep(100);
        cout << "                                                        ..............................................................................\n";
        Sleep(100);
        cout << "                                                        ..................... YOU HAVE 120 SECONDS TO FIND HERBS .....................\n";
        Sleep(100);
        cout << "                                                        ..............................................................................\n";
        Sleep(100);
        cout << "                                                        ..............................................................................\n";
        Sleep(2000);
        for(int i=0;i<500;i++){
            gotoxy(0,i);
            cout << "                                                                                ";
        }
        gotoxy(0,0);
        cout << "\n\n\n\n\n\n\n\n\n";
        cout << "                                                        ..............................................................................\n";
        Sleep(100);
        cout << "                                                        ..............................................................................\n";
        Sleep(100);
        cout << "                                                        ..........................   FIGHT FOR THE KINGDOM  ..........................\n";
        Sleep(100);
        cout << "                                                        ..............................................................................\n";
        Sleep(100);
        cout << "                                                        ..............................................................................\n";
        Sleep(5000);
        for(int i=0;i<500;i++){
            gotoxy(0,i);
            cout << "                                                                                ";
        }
        textcolor(14,0);
        gotoxy(0,0);
        Sleep(100);
        cout << "\n\n                                                           ****      ****     ***** \n";
        Sleep(100);
        cout << "                                                         **        **    **   **   ** \n";
        Sleep(100);
        cout << "                                                        **   ***  **      **  **    ** \n";
        Sleep(100);
        cout << "                                                         **   **   **    **   **   ** \n";
        Sleep(100);
        cout << "                                                           ****      ****     ***** \n";
        Sleep(100);
        cout << "\n";
        Sleep(100);
        cout << "                                                        *****    **       *******   *****   *****\n";
        Sleep(100);
        cout << "                                                        **   **  **       **       **      **      \n";
        Sleep(100);
        cout << "                                                        *****    **       *******   *****   ***** \n";
        Sleep(100);
        cout << "                                                        **   **  **       **            **      ** \n";
        Sleep(100);
        cout << "                                                        *****    *******  *******   *****   ***** \n";
        Sleep(100);
        cout << " \n";
        Sleep(100);
        cout << "                                                        **    **     ****     **    ** \n";
        Sleep(100);
        cout << "                                                        **    **   **    **   **    ** \n";
        Sleep(100);
        cout << "                                                         **  **   **      **  **    ** \n";
        Sleep(100);
        cout << "                                                           **      **    **    **  ** \n";
        Sleep(100);
        cout << "                                                           **        ****       **** \n\n\n";
        Sleep(1000);
        resetcolor();
        cout << "                                                                                                              Londing";
        Sleep(1000);
        cout << ".";
        Sleep(2000);
        cout << ".";
        Sleep(2000);
        cout << ".";
        Sleep(1000);
        
    
    }

    
    

}

void showstory(int a){
    char s1[] = " The king of the land who needed to resurrect his dog. He told the doctor to research pills in the cellar and find herbs at the  north. People believe that herbs can help the corpse become alive again.";
    char s2[] = " The doctor did the experiment But the result made the dog became zombie. The servant in the castle didn't beware so he was biten by the dog and    became a zombie as well. This event caused an epidemic.";
    char s3[] = " This epidemic spreaded in wide area. So the doctor searched for a solution. And founded that zombie will die when its brain is destroyed.";
    char s4[] = " And epimepic will disappear when eat the mixing herbal medicine, so you had to find herbs and ingredients to cooked an antidote to the     plague to resolve and public support, as well as to make the country return to peace again.";
    char c[] = ".,";
    int count=0,k,num;
    cout << "                                                        ";
    for(int j=0;j < 78;j++){
        cout << "#";
    }
    cout << "\n" ;
    for(int i=0;i<24;i++){
        Sleep(20);
        cout << "                                                        ";
        cout << "#";
        if(i==8 || i==15){
            cout << " ";
            for(int j=0;j<74;j++){
                textcolor(4,0);
                cout << "-";
            }
            cout << " ";
            num=1;
        }else if(i > 8 && i <= 14){
            textcolor(4,0);
            cout << "|";
            if(num <=3 && i > 9){
                textcolor(12,0);
                if(a == 1){
                    for(int n=0;n<74;n++){
                    
                    cout << s1[count];
                    count++;
                    k=n;
                        if(s1[count]==c[0]){
                            Sleep(100);
                            cout << s1[count];
                            count++;
                            num++;
                            break;  
                        }
                        
                    }
                    while(k<72){
                    cout << " ";
                    k++;
                    }
                }
                if(a == 2){
                    for(int n=0;n<74;n++){
                    cout << s2[count];
                    count++;
                    k=n;
                        if(s2[count]==c[0]){
                            Sleep(100);
                            cout << s2[count];
                            count++;
                            num++;
                            break;  
                        }
                        
                    }
                    while(k<72){
                    cout << " ";
                    k++;
                    }
                }
                if(a == 3){
                    for(int n=0;n<74;n++){
                    cout << s3[count];
                    count++;
                    k=n;
                        if(s3[count]==c[0] || s3[count]==c[1]){
                            Sleep(100);
                            cout << s3[count];
                            count++;
                            num++;
                            break;  
                        }
                        
                    }
                    while(k<72){
                    cout << " ";
                    k++;
                    }
                }
                if(a == 4){
                    for(int n=0;n<74;n++){
                    cout << s4[count];
                    count++;
                    k=n;
                        if(s4[count]==c[0] || s4[count]==c[1]){
                            Sleep(100);
                            cout << s4[count];
                            count++;
                            num++;
                            break;  
                        }
                        
                    }
                    while(k<72){
                    cout << " ";
                    k++;
                    }
                }    
                    
            }else{
                for(int n=0;n<74;n++) cout << " ";
            }
            textcolor(4,0);
            cout << "|";
        }else{
            for(int j=0;j<76;j++){
                cout << " ";
            }
        }
        textcolor(15,0);
        Sleep(20);
        cout << "#";
        cout << "\n" ;

    }
    cout << "                                                        ";
    for(int j=0;j < 26;j++){
        cout << "#";
    }
    textcolor(3,0); 
    cout << "::: press to continue :::";
    resetcolor();
    for(int j=0;j < 27;j++){
        cout << "#";
    }
    cout << "\n\n\n";

    
}


void tutorial(){
    cout << "\n";
    Sleep(100);
    textcolor(3,0); 
    cout << "                                                        ";
    cout << "               ................................................              \n";
    Sleep(100);
    cout << "                                                        ";
    cout << "               : _____ .  . _____  __   __  _____   _   .     :              \n";
    Sleep(100);
    cout << "                                                        ";
    cout << "               :   |   |  |   |   |  | |__|   |    /_\\  |     :              \n";
    Sleep(100);
    cout << "                                                        ";
    cout << "               :   |   |__|   |   |__| |  \\ __|__ /   \\ |___  :              \n";
    Sleep(100);
    cout << "                                                        ";
    cout << "               ................................................              \n";
    Sleep(100);
    resetcolor();
    Sleep(100);
    cout << "\n";
    Sleep(100);
    cout << "\n";
    Sleep(100);
    cout << "\n";
    Sleep(100);
    cout << "\n";
    Sleep(100);
    cout << "                                                        ";
    cout << " ___  __  ..  .  _____  __   __  .\n";
    Sleep(100);
    cout << "                                                        ";
    cout << "|    |  | | \\ |    |   |__| |  | | \n";
    Sleep(100);
    cout << "                                                        ";
    cout << "|___ |__| |  \\|    |   |  \\ |__| |___\n";
    Sleep(100);
    cout << "                                                        ";
    cout << "-------------------------------------\n";
    Sleep(100);
    cout << "                                                        ";
    cout << "-------------------------------------\n";
    Sleep(100);
    cout << "                                                        ";
    textcolor(12,0);
    cout << "\n";
    Sleep(100);
    cout << "                                                        ";
    cout << "               \\    /\n";
    Sleep(100);
    cout << "                                                        ";
    cout << "       ..press  \\/\\/ go up..\n\n";
    textcolor(14,0);
    cout << "                                                        ";
    cout << "                       /_\\\n";
    Sleep(100);
    cout << "                                                        ";
    cout << "              ..press /   \\ go left..\n\n";
    Sleep(100);
    textcolor(11,0);
    cout << "                                                        ";
    cout << "                              __\n";
    Sleep(100);
    cout << "                                                        ";
    cout << "                             |__\n";
    Sleep(100);
    cout << "                                                        ";
    cout << "                     ..press  __| go down..\n\n";
    textcolor(10,0);
    Sleep(100);
    cout << "                                                        ";
    cout << "                                     _\n";
    Sleep(100);
    cout << "                                                        ";
    cout << "                                    | \\\n";
    Sleep(100);
    cout << "                                                        ";
    cout << "                            ..press |_/ go right..\n\n\n\n";
    resetcolor();
    Sleep(1000);
    cout << "                                                        ";
    cout << "_____ _____  ___ ..    ..\n";
    Sleep(100);
    cout << "                                                        ";
    cout << "  |     |   |___ | \\  / |\n";
    Sleep(100);
    cout << "                                                        ";
    cout << "__|__   |   |___ |  \\/  |\n";
    Sleep(100);
    cout << "                                                        ";
    cout << "-------------------------\n";
    Sleep(100);
    cout << "                                                        ";
    cout << "-------------------------\n";
    
    cout << "\n\n\n\n";
    Sleep(100);
    cout << "                                                        ";
    cout << "                                ..FIND HERDS..\n";
    textcolor(10,0);
    Sleep(100);
    cout << "                                                        ";
    cout << "\t\t *\n";
    Sleep(100);
    cout << "                                                        ";
    cout << "\t\t****\n";
    Sleep(100);
    cout << "                                                        ";
    cout << "\t\t*****\n";
    Sleep(100);
    cout << "                                                        ";
    cout << "\t\t ***    **\tSPINACH   +1000 point\n";

    textcolor(2,0);
    Sleep(100);
    cout << "                                                        ";
    cout << "\t\t   *  ***\n";
    Sleep(100);
    cout << "                                                        ";
    cout << "\t\t    **\n";
    Sleep(100);
    cout << "                                                        ";
    cout << "\t\t    *\n\n\n";

    resetcolor();

    textcolor(10,0);
    Sleep(100);
    cout << "                                                        ";
    cout << "\t\t         *\n";
    Sleep(100);
    cout << "                                                        ";
    cout << "\t\t         *\n";

    textcolor(12,0);
    Sleep(100);
    cout << "                                                        ";
    cout << "\t\t        **\n";
    Sleep(100);
    cout << "                                                        ";
    cout << "\t\t       ***\tCHILLI   +1000 point\n";
    Sleep(100);
    cout << "                                                        ";
    cout << "\t\t      ***\n";
    Sleep(100);
    cout << "                                                        ";
    cout << "\t\t     **\n";
    Sleep(100);
    cout << "                                                        ";
    cout << "\t\t   *\n\n\n";

    resetcolor();

    textcolor(13,0);
    Sleep(100);
    cout << "                                                        ";
    cout << "\t\t      ***\n";
    Sleep(100);
    cout << "                                                        ";
    cout << "\t\t    *******\n";
    Sleep(100);
    cout << "                                                        ";
    cout << "\t\t    *******\tMANGOSTEEN   +1000 point\n";
    Sleep(100);
    cout << "                                                        ";
    cout << "\t\t      ***\n\n\n";

    resetcolor();

    textcolor(15,0);
    Sleep(100);
    cout << "                                                        ";
    cout << "\t\t      ****\n";
    Sleep(100);
    cout << "                                                        ";
    cout << "\t\t      ****\n";
    Sleep(100);
    cout << "                                                        ";
    cout << "\t\t      *";
    textcolor(14,0);
    cout << "**";
    textcolor(15,0);
    cout << "*\n";
    Sleep(100);
    cout << "                                                        ";
    cout << "\t\t      *";
    textcolor(14,0);
    
    cout << "**";
    textcolor(15,0);
    
    cout << "*\tSERUM ANIMAL   +1000 point\n";
    Sleep(100);
    cout << "                                                        ";
    cout << "\t\t      *";
    textcolor(14,0);
    
    cout << "**";
    textcolor(15,0);
    
    cout << "*\n";
    Sleep(100);
    cout << "                                                        ";
    cout << "\t\t      *";
    textcolor(14,0);
    
    cout << "**";
    textcolor(15,0);
    cout << "*\n";

    Sleep(100);
    cout << "                                                        ";
    cout << "\t\t       **\n\n\n";
    resetcolor();
    Sleep(100);
    cout << "                                                        ";
    cout << "                     !!!FIND ALL GET +1500 point!!!                           \n";
    Sleep(1000);
    cout << "\n\n\n";

    Sleep(100);
    cout << "                                                        ";
    cout << "\t\t    *****\n";
    Sleep(100);
    cout << "                                                        ";
    cout << "\t\t*************\n";
    Sleep(100);
    cout << "                                                        ";
    cout << "\t\t*    ";
    textcolor(12,0);
    cout << "***    ";
    resetcolor();
    cout << "*\n";
    Sleep(100);
    cout << "                                                        ";
    cout << "\t\t*  ";
    textcolor(12,0);
    cout << "*** ***  ";
    resetcolor();
    cout << "*\tFIRST AID   +20 HP\n";
    Sleep(100);
    cout << "                                                        ";
    cout << "\t\t*  ";
    textcolor(12,0);
    cout << "*** ***  ";
    resetcolor();
    cout << "*\t            +50 point\n";
    Sleep(100);
    cout << "                                                        ";
    cout << "\t\t*    ";
    textcolor(12,0);
    cout << "***    ";
    resetcolor();
    cout << "*\n";
    Sleep(100);
    cout << "                                                        ";
    cout << "\t\t*************\n\n\n";
    Sleep(100);
    cout << "                                                        ";
    textcolor(14,0);
    cout << "\t\t         *\n";
    Sleep(100);
    cout << "                                                        ";
    textcolor(4,0);
    cout << "\t\t        *\n";
    Sleep(100);
    cout << "                                                        ";
    cout << "\t\t      ***\t!!BOMB!! -30 HP\n";
    Sleep(100);
    cout << "                                                        ";
    cout << "\t\t    **";
    textcolor(8,0); cout << "*";
    textcolor(4,0); cout << "*";
    textcolor(8,0); cout << "*";
    textcolor(4,0); cout << "**\t         +100 point\n";
    Sleep(100);
    cout << "                                                        ";
    cout << "\t\t    **";
    textcolor(8,0); cout << "*";
    textcolor(4,0); cout << "*";
    textcolor(8,0); cout << "*";
    textcolor(4,0); cout << "**\n";
    Sleep(100);
    cout << "                                                        ";
    cout << "\t\t      ***\n\n\n";
    Sleep(100);
    resetcolor();
    Sleep(1000);

    cout << "                                                        ";
    cout << " ___  .   . ..  .\n";
    Sleep(100);
    cout << "                                                        ";
    cout << "| __  |   | | \\ |\n";
    Sleep(100);
    cout << "                                                        ";
    cout << "|___| |___| |  \\|\n";
    Sleep(100);
    cout << "                                                        ";
    cout << "_________________\n";
    Sleep(100);
    cout << "                                                        ";
    cout << "_________________\n";
    textcolor(8,0);
    Sleep(100);
    cout << "                                                        ";
    cout << "\t\t        **                  \t                        **\n";
    Sleep(100);
    cout << "                                                        ";
    cout << "    **********************      \t**                      **     \n";
    Sleep(100);
    cout << "                                                        ";
    cout << "********************************\t***********************************\n";
    Sleep(100);
    cout << "                                                        ";
    cout << "********************************\t***********************************\n";
    Sleep(100);
    cout << "                                                        ";
    cout << "****  *************             \t**       ******************      **\n";
    cout << "                                                        ";
    cout << "****  **";
    textcolor(7,0);
    cout << "**";
    textcolor(8,0);
    cout << "*     ***             \t";
    textcolor(7,0);
    cout << "**";
    textcolor(8,0);
    Sleep(100);
    cout << "*         ***\n";
    Sleep(100);
    cout << "                                                        ";
    cout << "      ***        ***            \t         ***          ***\n\n";
    resetcolor();
    Sleep(100);
    cout << "                                                        ";
    cout << "M16                            \t\tBAZOOKA\n\n\n";
    Sleep(1000);

    cout << "                                                        ";
    textcolor(11,0);
    cout << "\t\t     *****\n";
    cout << "                                                        ";
    cout << "\t\t    *";
    textcolor(7,0);
    cout << "* *";
    textcolor(11,0);
    cout << "***\n";
    Sleep(100);
    cout << "                                                        ";
    cout << "\t\t    *";
    textcolor(7,0);
    cout << "****";
    textcolor(11,0);
    cout << "**\n";
    Sleep(100);
    cout << "                                                        ";
    textcolor(7,0);
    cout << "\t\t      ****";
    textcolor(11,0);
    cout << "*\tKILL ZOMBIE +250 point\n";
    Sleep(100);
    cout << "                                                        ";
    textcolor(11,0);
    cout << "\t\t *****";
    textcolor(5,0);
    cout << "*****\n";
    Sleep(100);
    cout << "                                                        ";
    textcolor(11,0);
    cout << "\t\t*  *******";
    textcolor(5,0);
    cout << "*\n";
    Sleep(100);
    cout << "                                                        ";
    textcolor(11,0);
    cout << "\t\t  * ";
    textcolor(5,0);
    cout << "  *****\n";
    cout << "                                                        ";
    resetcolor();

    cout << "..............................................................................\n";
    Sleep(100);
    cout << "                                                        ";
    cout << "..........................      PRESS TO START      ..........................\n";
    Sleep(100);
    cout << "                                                        ";
    cout << "..............................................................................\n";
}