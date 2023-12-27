#include <stdio.h>
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class point{
  public:
    int x;int y;int number;
    point(int x=0,int y=0,int number=0){
      this->x=x;
      this->y=y;
      this->number=number;
    }
};

bool menhaton(point a,point b){
  return abs(a.x)+abs(a.y) < abs(b.x)+abs(b.y);
}

int main(){
  point p[1000];
  int n;
  (void)scanf("%d",&n);
  int number=1;
  for(int i=0;i<n;i++){
    int x,y;
    (void)scanf("%d %d",&x,&y);
    p[i]=point(x,y,number);
    number++;
  }
  sort(p,p+n,menhaton);
  for(int i=0;i<n;i++){
    cout << p[i].number << endl;
  }
  return 0;
}