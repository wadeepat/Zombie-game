#include<iostream>
#include<conio.h>
#include<Windows.h>
#include<iomanip>
#define textcolor(txt,back) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), back*16+txt)
#define resetcolor() SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15)
using namespace std;

void gun_m16(){
    textcolor(8,0);
    cout << "\t\t\t        **"<< "\n";
    cout << "\t    **********************\n";
    cout << "\t********************************\n";
    cout << "\t********************************\n";
    cout << "\t****  *************\n";
    cout << "\t****  **";

    textcolor(7,0);
    cout << "**";

    textcolor(8,0);
    cout << "*     ***\n";
    cout << "\t      ***        ***\n";

    resetcolor();
}

void herb(){
    textcolor(10,0);
    cout << "\t *\n";
    cout << "\t****\n";
    cout << "\t*****\n";
    cout << "\t  **    **\n";

    textcolor(2,0);
    cout << "\t   *  ***\n";
    cout << "\t    **\n";
    cout << "\t    *\n";

    resetcolor();
}

int main(){
    gun_m16();
    herb();
}