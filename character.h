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
    cout << "   **\n";
    resetcolor();

}

void zombie(){
    textcolor(11,0);
    cout << "\t     *****\n";
    
    cout << "\t    *";
    textcolor(7,0);
    cout << "* *";
    textcolor(11,0);
    cout << "***\n";

    cout << "\t    *";
    textcolor(7,0);
    cout << "****";
    textcolor(11,0);
    cout << "**\n";

    textcolor(7,0);
    cout << "\t      ****";
    textcolor(11,0);
    cout << "*\n";

    textcolor(11,0);
    cout << "\t *****";
    textcolor(5,0);
    cout << "*****\n";

    textcolor(11,0);
    cout << "\t*  *******";
    textcolor(5,0);
    cout << "*\n";

    textcolor(11,0);
    cout << "\t  * ";
    textcolor(5,0);
    cout << "  *****\n";
    

    resetcolor();
}

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

void ingr_spinach(){
    textcolor(10,0);
    cout << "\t *\n";
    cout << "\t****\n";
    cout << "\t*****\n";
    cout << "\t ***    **\n";

    textcolor(2,0);
    cout << "\t   *  ***\n";
    cout << "\t    **\n";
    cout << "\t    *\n";

    resetcolor();
}

void ingr_chilli(){
    textcolor(10,0);
    cout << "\t         *\n";
    cout << "\t         *\n";

    textcolor(12,0);
    cout << "\t        **\n";
    cout << "\t       ***\n";
    cout << "\t      ***\n";
    cout << "\t     **\n";
    cout << "\t   *\n";

    resetcolor();
}

void ingr_mangosteen(){
    textcolor(13,0);
    cout << "\t      ***\n";
    cout << "\t    *******\n";
    cout << "\t    *******\n";
    cout << "\t      ***\n";

    resetcolor();
}

void ingr_serumanimal(){
    textcolor(15,0);
    cout << "\t      ****\n";
    cout << "\t      ****\n";
    cout << "\t      *";
    
    textcolor(14,0);
    cout << "**";
    textcolor(15,0);
    cout << "*\n";
    
    cout << "\t      *";
    textcolor(14,0);
    cout << "**";
    textcolor(15,0);
    cout << "*\n";

    cout << "\t      *";
    textcolor(14,0);
    cout << "**";
    textcolor(15,0);
    cout << "*\n";

    cout << "\t      *";
    textcolor(14,0);
    cout << "**";
    textcolor(15,0);
    cout << "*\n";
  
    cout << "\t       **\n";
    
    resetcolor();
}

void safty(){
    cout << "\t    *****\n";
    //cout << "\t    *   *\n";
    cout << "\t*************\n";
    cout << "\t*    ";
    textcolor(12,0);
    cout << "***    ";
    resetcolor();
    cout << "*\n";

    cout << "\t*  ";
    textcolor(12,0);
    cout << "*** ***  ";
    resetcolor();
    cout << "*\n";

    cout << "\t*  ";
    textcolor(12,0);
    cout << "*** ***  ";
    resetcolor();
    cout << "*\n";

    cout << "\t*    ";
    textcolor(12,0);
    cout << "***    ";
    resetcolor();
    cout << "*\n";
    cout << "\t*************\n";

    resetcolor();
}

void bomb(){
    textcolor(14,0);
    cout << "\t         *\n";
    textcolor(4,0);
    cout << "\t        *\n";
    cout << "\t      ***\n";
    cout << "\t    **";
    textcolor(8,0); cout << "*";
    textcolor(4,0); cout << "*";
    textcolor(8,0); cout << "*";
    textcolor(4,0); cout << "**\n";
    cout << "\t    **";
    textcolor(8,0); cout << "*";
    textcolor(4,0); cout << "*";
    textcolor(8,0); cout << "*";
    textcolor(4,0); cout << "**\n";
    cout << "\t      ***\n";
    resetcolor();
}