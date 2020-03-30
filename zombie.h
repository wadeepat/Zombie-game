#include<iostream>
#include<string>
#include<ctime>
#include<cstdlib>
#include<iomanip>
#define textcolor(txt,back) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), back*16+txt)
#define resetcolor() SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15)

using namespace std;

class Unit{
		string name;
		string type;		
		int hp;
		int hpmax;
		int atk1;
        int atk2;
        int atk3;
		int def;
		bool guard_on;		
	public:			
		void create(string,string,int,int);
		void showStatus();
		void newTurn();
		int attack(Unit &,int);
		int beAttacked(int);	
		bool isDead();
		int gethp();	
};
int Unit::gethp(){
	return hp;
}
void Unit::create(string t,string namefrom,int hpfrom,int r){ 
	if(t == "Hero"){
		type = "Hero";
		name=namefrom;
		hpmax = 100;
		hp=hpfrom;   
		atk1 = r;     
        atk2 = 20;
        atk3 = 30;
		def = 0;
	}else if(t == "Zombie"){
		type = "Zombie";
		name = "Zombie";
		hpmax = 30;
		hp=30;
		if(r==1) atk1 = 5;
		else if(r==2) atk1 = 10;
	}
	
	guard_on = false;
}


void Unit::showStatus(){
	textcolor(7,0);
	if(type == "Hero"){
		cout << "-----------------------------------------------------------------------------\n"; 
		cout << name << "\n"; 
		cout << "HP: " << hp << "/" << hpmax << "\t\t\tATK: "<< atk1 << "\t\t\t\tDEF: "<< def;		
		cout << "\n------------------------------------------------------------------------------\n";
	}	
	else if(type == "Zombie"){
		cout << "------------------------------------------------------------------------------\n"; 
		cout << "Zombie" << "\n"; 
		cout << "HP: " << hp << "\t\t\t\tATK: "<< atk1 << "\t\t\t\tDEF: "<< def;
		cout << "\n------------------------------------------------------------------------------\n";
	}
}


void Unit::newTurn(){
	guard_on = false;
}

int Unit::attack(Unit & target,int atkz){
	target.beAttacked(atkz);
}

int Unit::beAttacked(int oppatk){
	int dmg = oppatk-def;
	if(dmg < 0) dmg = 0;
	hp = hp-dmg;
	if(hp <= 0 ) cout << ">>" << name << " was defeated. \n";
	return dmg;
}

bool Unit::isDead(){
	if(hp <= 0) return true;
	else return false;
}

void drawScene(char p_action,int p,char m_action,int m){
	cout << "                                                       \n";
	if(p_action == 'A'){
		cout << setw(17) << -m ;
	}
	
	if(m_action == 'A'){
		cout   <<"\t\t        \t" << -p ;
	}

	cout << setw(10) << "\t\t\t\t\t\t\n";
	
	cout << endl;
	textcolor(4,0);cout << setw(10) << "\t     *****"; textcolor(14,0);cout << "         *"; 
	cout << "\t"; textcolor(2,0);cout << "\t     *****\n";
    textcolor(4,0);cout << setw(10) << "\t    *******"; textcolor(14,0);cout << "       **"; 
	cout << "\t"; textcolor(2,0);cout << "\t    *"; textcolor(7,0);cout << "* *";textcolor(2,0);cout << "***\n";
    textcolor(4,0);cout << setw(10) << "\t    **"; textcolor(1,0);cout << "* *"; textcolor(4,0);cout << "**";textcolor(14,0);cout << "      ***"; 
	cout << "\t"; textcolor(2,0);cout << "\t    *"; textcolor(7,0);cout << "****";  textcolor(2,0);cout << "**\n"; 
	if(m_action == 'A'){
		textcolor(4,0);cout << setw(10) << "\t     *****"; textcolor(14,0);cout << "      ***"; 
		cout << "\t"; textcolor(7,0);cout << "\t      ****"; textcolor(2,0);cout << "*    Attack!\n"; 
	}else {
		textcolor(4,0);cout << setw(10) << "\t     *****"; textcolor(14,0);cout << "      ***"; 
		cout << "\t"; textcolor(7,0);cout << "\t      ****"; textcolor(2,0);cout << "*    \n"; 
	}
	if(p_action == 'A'){
		textcolor(4,0);cout << setw(3) << "Attack!" << "\t    **";textcolor(1,0);cout << "***";textcolor(4,0);cout <<"**";textcolor(14,0);cout << "   ******"; 
		cout << "\t"; textcolor(2,0);cout << "\t *****"; textcolor(8,0);cout << "*****\n";
	}else {
		textcolor(4,0);cout << setw(10) << "\t    **";textcolor(1,0);cout << "***";textcolor(4,0);cout <<"**";textcolor(14,0);cout << "   ******"; 
		cout << "\t"; textcolor(2,0);cout << "\t *****"; textcolor(8,0);cout << "*****\n";
	}
	textcolor(4,0);cout << setw(10) << "\t    **";textcolor(1,0);cout << "***";textcolor(4,0);cout <<"**";textcolor(14,0);cout << "   ******"; 
	cout << "\t"; textcolor(2,0);cout << "\t *****"; textcolor(8,0);cout << "*****\n"; 
    textcolor(4,0);cout << setw(10) << "\t    **";textcolor(1,0);cout << "***";textcolor(4,0);cout <<"**";textcolor(14,0);cout << "    **"; 
	cout << "\t";textcolor(2,0);cout << "\t*  *******"; textcolor(8,0);cout << "*\n";  
    textcolor(4,0);cout << setw(10) << "\t    *******";textcolor(14,0);cout << "   **"; 
	cout << "\t"; textcolor(2,0);cout << "\t  * "; textcolor(8,0);cout << "  *****\n"; textcolor(7,0);
};


void playerWin(){
	textcolor(4,0);	
	cout << "******************************************************************************\n";
	cout << "*                                                                            *\n";
	cout << "*                               YOU WIN!!!                                   *\n";
	cout << "*                                                                            *\n";
	cout << "******************************************************************************\n";textcolor(7,0);
};


void playerLose(){
	textcolor(6,0);
	cout << "******************************************************************************\n";
	cout << "*                                                                            *\n";
	cout << "*                               YOU LOSE!!!                                  *\n";
	cout << "*                                                                            *\n";
	cout << "******************************************************************************\n";textcolor(7,0);
};







