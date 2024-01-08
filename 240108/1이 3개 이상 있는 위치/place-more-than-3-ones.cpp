#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

int arr[101][101];
int dx[4]={0,1,0,-1},dy[4]={1,0,-1,0};
int n,cnt;

bool InRange(int x,int y){
  return (x>0&&x<=n&&y>0&&y<=n);
}

int check(int x,int y){
  int nx,ny;
  int cnt_1=0;
  for(int i=0;i<4;i++){
    nx=x+dx[i];ny=y+dy[i];
    if(InRange(nx,ny))
      cnt_1++;
  }
  return cnt_1;
}
int main(){
  (void)scanf("%d",&n);
  for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++)
      (void)scanf("%d",&arr[i][j]);
  }
  for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
      if(check(i,j)==4)
        cnt++;
    }
  }
  printf("%d",cnt);
}