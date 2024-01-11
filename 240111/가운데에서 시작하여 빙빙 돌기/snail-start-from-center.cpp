#include <stdio.h>

int n;
int arr[101][101];
int visit[101][101];
int dx[4]={0,1,0,-1},dy[4]={1,0,-1,0};
bool InRange(int x,int y){
  return (x>0&&x<=n&&y>0&&y<=n);
}

int main(){
  (void)scanf("%d",&n);
  int x=n,y=n;
  int dir_num=2;
  visit[x][y]=1;
  arr[x][y]=n*n;
  for(int i=n*n-1;i>0;i--){
    int nx=x+dx[dir_num],ny=y+dy[dir_num];
    if(!InRange(nx,ny)||visit[nx][ny]!=0)
      dir_num=(dir_num+1)%4;
    x=x+dx[dir_num];
    y=y+dy[dir_num];
    visit[x][y]=1;
    arr[x][y]=i;
  }
  for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
      printf("%d ",arr[i][j]);
    }
    printf("\n");
  }
}