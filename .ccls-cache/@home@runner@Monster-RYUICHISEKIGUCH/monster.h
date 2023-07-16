#ifndef monster_h
#define monster_h
#include "nameList.h"
#include <iostream>
#include <string>
using namespace std;
class monster{
private:
	string name;
	int hp;
  bool isDead = false;
public:
  
  void print(); // to print all data
	void operator++();
	void operator+=(int);
	bool operator==(monster);
	void attack(monster &);
	bool checkDeath();
	void getKilled();
  monster(string,int);

};

monster::monster(string n = getRandomName() ,int h=20){

  //set var
  name=n;
  hp=h ;
  cout<<"monster "<<name <<" is here HAHAHA"<<endl;
  
}


void monster::print(){
  cout<<"Monster "<<name;
  cout<<" hp:"<<hp<<endl;
  
}
void monster::attack(monster & b){// x.Attack(y)
  int damage = rand() % 6 + 1;
     cout<<"ATTACK!!!!!"<<endl;
     if(hp>0){
        cout << name << " attacked " << b.name << " with                           damage " << damage << "." << endl;
	       b.checkDeath();
         b.hp -= damage;
     }
  else cout<<"I am dead"<<endl;
  
}


void monster::operator++()
{
	++(this->hp);
}

void monster::operator+=(int n)
{
	this->hp += n;
}



bool monster::checkDeath()
{
	if (this->hp <= 0)
	{
		this->isDead = true;
		this->hp = 0;

		cout << this->name << " is dead." << endl;
	}
	return this->isDead;
}

void monster::getKilled()
{
	this->hp = 0;
	this->isDead = true;
	cout << this->name << " got killed." << endl;
}
#endif
