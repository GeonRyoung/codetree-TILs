#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

string user;
int lv;

class game{
  public:
    string id;int level;
    game(string id="", int level=0){
      this->id=id;
      this->level=level; 
    }
};

int main(){
  game g=game();
  g.id="codetree";
  g.level=10;
  cin >> user;
  cin >> lv;
  game g1=game();
  g1.id=user;
  g1.level=lv;
  cout << "user" << " " << g.id << " " << "lv" << " " << g.level <<endl;
  cout << "user" << " " << g1.id << " " << "lv" << " "<< g1.level;
  return 0;
}