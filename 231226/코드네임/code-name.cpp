#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

class spy{
  public:
    char name;int point;
    spy(char name=' ',int point=0){
      this->name=name;
      this->point=point;
    }
};

int main(){
  spy SPY[5];
  for(int i=0;i<5;i++){
    char name;int point;
    cin >> name >> point;
    SPY[i]=spy(name,point);
  }
  int lowspy=0;
  for(int i=1;i<5;i++){
    if(SPY[lowspy].point>SPY[i].point)
      lowspy=i;
  }
  cout << SPY[lowspy].name << " " <<SPY[lowspy].point;
  return 0;
}