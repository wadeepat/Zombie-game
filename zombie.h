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
		void create(string,string);
		void showStatus();
		void newTurn();
		int attack(Unit &);
		int beAttacked(int);
		//int heal();	
		void guard();
		bool isDead();	
};

void Unit::create(string t,string namefrom){ 
	if(t == "Hero"){
		type = "Hero";
		name=namefrom;
		hpmax = 100;   
		atk1 = 10;     
        atk2 = 20;
        atk3 = 30;
		def = 0;
	}else if(t == "Zombie"){
		type = "Zombie";
		name = "Zombie";
		hpmax = 30;   
		atk1 = 5;     
	}
	hp = hpmax;
	guard_on = false;
}

/*void Unit::showStatus(){
	if(type == "Hero"){
		cout << "---------------------------------------\n"; 
		cout << name << "\n"; 
		cout << "HP: " << hp << "/" << hpmax << "\tATK: "<< atk1 << "\t\tDEF: "<< def;		
		cout << "\n---------------------------------------\n";
	}	
	else if(type == "Zombie"){
		cout << "\t\t\t\t---------------------------------------\n"; 
		cout << "\t\t\t\tZombie" << "\n"; 
		cout << "\t\t\t\tHP: " << hp << "\t\tATK: "<< atk1 << "\t\tDEF: "<< def;
		cout << "\n\t\t\t\t---------------------------------------\n";
	}
}*/

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

int Unit::attack(Unit & target){
	target.beAttacked(atk1);
}

int Unit::beAttacked(int oppatk){
	int dmg = oppatk-def;
	//if(guard_on) dmg = dmg/3;
	if(dmg < 0) dmg = 0;
	hp = hp-dmg;
	if(hp <= 0 ) cout << ">>" << name << " was defeated. \n";
	return dmg;
}

/*int Unit::heal(){
	int heal = rand()%21+10;
	if(hp+heal > hpmax) heal = hpmax - hp;
	hp += heal;
	return heal;
}*/

/*void Unit::guard(){
	guard_on = true;
}*/

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







