#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

int dx[4]={1,0,-1,0},dy[4]={0,-1,0,1};
int x,y;
int dir_num=3;

int main(){
  string dire;
  cin >> dire;
  for(int i=0;i<(int)dire.size();i++){
    if(dire[i]=='L'){
      dir_num=(dir_num+3)%4;
    }
    else if(dire[i]=='R'){
      dir_num=(dir_num+1)%4;
    }
    else if(dire[i]=='F'){
      x+=dx[dir_num];
      y+=dy[dir_num];
    }
  }
  printf("%d %d",x,y);
}