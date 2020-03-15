#include<iostream>
#include<conio.h>
#include<Windows.h>
#include<iomanip>
#define textcolor(txt,back) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), back*16+txt)
#define resetcolor() SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15)
using namespace std;

void character(){
    textcolor(4,0);
    cout << "\t     *****";

    textcolor(14,0);
    cout << "         *\n";

    textcolor(4,0);
    cout << "\t    *******";

    textcolor(14,0);
    cout << "       **\n";

    textcolor(4,0);
    cout << "\t    **";
    textcolor(1,0);
    cout << "* *";
    textcolor(4,0);
    cout << "**";

    textcolor(14,0);
    cout << "      ***\n";

    textcolor(4,0);
    cout << "\t     *****";

    textcolor(14,0);
    cout << "      ***\n";

    textcolor(4,0);
    cout << "\t    **";
    textcolor(1,0);
    cout << "***";
    textcolor(4,0);
    cout <<"**";

    resetcolor();
    textcolor(14,0);
    cout << "   ******\n";

    textcolor(4,0);
    cout << "\t    **";
    textcolor(1,0);
    cout << "***";
    textcolor(4,0);
    cout <<"**";

    textcolor(14,0);
    cout << "    **\n";

    textcolor(4,0);
    cout << "\t    *******";

    textcolor(14,0);
    cout << "   **";
    resetcolor();
}
