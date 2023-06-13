#include "monster.h"

class Thanos {
private:
  int stones;
  int hp; // extra hp;
public:
  /* constructor and destructor */
  Thanos(int = 0, int = 100000);
  ~Thanos(); // cout something

  void snap_finger(monster[], int);
  /* show all hps
  / clear half of monster hp, if stone =6*/
  void operator++(); // increase the stone;
};

 Thanos::Thanos(int a, int b) {
  stones = a;
  hp = b;
	cout << "Thanos has been summoned with " << stones << " stones and " << hp << " HP." << endl;     
}
void Thanos::operator++(){
  stones++;
}

Thanos::~Thanos()
{
  cout<<"Thanos is dead"<<endl;
}

void Thanos::snap_finger(monster m[], int n){
      if(stones<6) 
          cout<<"Not enough stones"<<endl;
      else{
        cout<<"Thanos snapped his finger"<<endl;
        int i;
        for(i=0;i<n;i+=2){
            m[i].getKilled();
        }

        
      }
}