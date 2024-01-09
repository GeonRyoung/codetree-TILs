#include <stdio.h>

int arr[101][101];

int dx[4]={0,1,0,-1},dy[4]={1,0,-1,0};

bool InRange(int x,int y,int n){
  return(x>0&&x<=n&&y>0&&y<=n);
}

bool exist(int x,int y,int n){
  int cnt=0;
  for(int i=0;i<4;i++){
    int nx=x+dx[i],ny=y+dy[i];
    if(InRange(nx,ny,n)&&arr[nx][ny]==1)
      cnt++;
  }
  return (cnt>=3);
}
int main(){
  int n;
  int cnt=0;
  (void)scanf("%d",&n);
  for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++)
      (void)scanf("%d",&arr[i][j]);
  }
  for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
      if(exist(i,j,n)){
        cnt++;
      }
    }
  }
  printf("%d",cnt);
}