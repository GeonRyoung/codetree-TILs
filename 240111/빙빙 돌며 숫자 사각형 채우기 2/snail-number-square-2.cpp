#include <stdio.h>

int dx[4]={0,1,0,-1},dy[4]={1,0,-1,0};
int arr[101][101];
int visit[101][101];
int x=1,y=1,dir_num,n,m;

bool InRange(int x,int y){
  return (x>0&&x<=n&&y>=0&&y<=m);
}

int main(){
  visit[1][1]=1;
  arr[1][1]=1;
  dir_num=1;
  (void)scanf("%d %d",&n,&m);
  for(int i=2;i<=n*m;i++){
    int nx=x+dx[dir_num],ny=y+dy[dir_num];
    if(!InRange(nx,ny)||visit[nx][ny]!=0)
      dir_num=(dir_num+3)%4;
    x=x+dx[dir_num];y=y+dy[dir_num];
    arr[x][y]=i;
    visit[x][y]=1;
  }
  for(int i=1;i<=n;i++){
    for(int j=1;j<=m;j++){
      printf("%d ",arr[i][j]);
    }
    printf("\n");
  }
  return 0;
}