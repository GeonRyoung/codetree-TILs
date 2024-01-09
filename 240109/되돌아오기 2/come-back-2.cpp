#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

string n;
int dx[4]={0,1,0,-1},dy[4]={1,0,-1,0};

int main(){
  cin >> n;
  int x=1,y=1,cnt=0;;
  int dir_num=3;
  for(int i=0;i<(int)n.size();i++){
    char dir=n[i];
    if(dir=='R') 
      dir_num=(dir_num+1)%4;
    else if(dir=='L') 
      dir_num=(dir_num+3)%4;
    else {
      x=x+dx[dir_num],y=y+dy[dir_num];
      if(x==1&&y==1)
        break;}
    cnt++;
  }
  if(x==1&&y==1)
    printf("%d",cnt);
  else
    printf("-1");
  return 0;
}