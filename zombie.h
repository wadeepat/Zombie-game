#include<iostream>
#include<string>
#include<ctime>
#include<cstdlib>
#include<iomanip>

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
		void create(string);
		void showStatus();
		void newTurn();
		int attack(Unit &);
		int beAttacked(int);
		//int heal();	
		//void guard();
		bool isDead();	
};

void Unit::create(string t){ 
	if(t == "Hero"){
		type = "Hero";
		cout << "Please input your name: ";
		getline(cin,name);
		hpmax = 100;   
		atk1 = 10;     
        atk2 = 20;
        atk3 = 30;
		def = 10;
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
	cout << "                                       "<< -p <<"\n";
	}else{
	cout << "                                                       \n";	
	}	
	cout << "                                *               *      \n";
	cout << "                                **  *********  **      \n";
	cout << "                                ****         ****      \n";
	if(m_action == 'A'){
	cout << "                 " << setw(5) << -m << "           *** **   ** ***       Attack!\n";
	}else if(m_action == 'G'){
	cout << "                                 *** **   ** ***       Guard!\n";
	}else{
	cout << "                                 *** **   ** ***       \n";	
	}
	cout << "                                  ** **   ** **        \n";
	cout << "                   ***             *         *         \n";
	if(p_action == 'A'){
	cout << "        Attack!    ***  *           *********          \n";		
	}else if(p_action == 'H'){
	cout << "      Heal! +" << setw(2) << p << "    ***  *           *********          \n";
	}else if(p_action == 'G'){
	cout << "         Guard!    ***  *           *********          \n";
	}else{
	cout << "                   ***  *           *********          \n";	
	}
	cout << "                    *  *       ***  *  *  *            \n";
	cout << "                  *****           **   *   *           \n";
	cout << "                    *                  *    ***        \n";
	cout << "                   * *               **        *       \n";
	cout << "                  *   *                                \n";
	cout << "                                                       \n";
};


void playerWin(){	
	cout << "*******************************************************\n";
	for(int i = 0; i < 3; i++) cout << "*                                                     *\n";
	cout << "*                   YOU WIN!!!                        *\n";
	for(int i = 0; i < 3; i++) cout << "*                                                     *\n";
	cout << "*******************************************************\n";
};


void playerLose(){
	cout << "*******************************************************\n";
	cout << "*                                                     *\n";
	cout << "*                   YOU LOSE!!!                       *\n";
	cout << "*                                                     *\n";
	cout << "*******************************************************\n";
};







