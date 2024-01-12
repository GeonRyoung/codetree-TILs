#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

int n,t;
int arr[101][101];
int dx[4]={0,1,0,-1},dy[4]={1,0,-1,0};
bool InRange(int x,int y){
  return (x>0&&x<=n&&y>0&&y<=n);
}

int main(){
  (void)scanf("%d %d",&n,&t);
  int x,y;
  x=n/2+1,y=n/2+1;
  string order;
  cin >> order;
  for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
      (void)scanf("%d",&arr[i][j]);
    }
  }
  int dir=3;
  int ans=arr[x][y];
  for(int i=0;i<t;i++){
    if(order[i]=='R')
      dir=(dir+1)%4;
    else if(order[i]=='L')
      dir=(dir+3)%4;
    else if(order[i]=='F'){
      int nx=x+dx[dir],ny=y+dy[dir];
      if(InRange(nx,ny)){
        x=nx;y=ny;
        ans+=arr[x][y];
      }
    }
  }
  printf("%d",ans);
}