#include <stdio.h>

int n,m;
int arr[101][101];
int visit[101][101];
int dx[4]={0,1,0,-1},dy[4]={1,0,-1,0};

bool InRange(int x,int y){
  return(x>0&&x<=n&&y>0&&y<=m);
}

int main(){
  int x=1,y=1;
  int dir_num=0;
  (void)scanf("%d %d",&n,&m);
  arr[x][y]=1;
  visit[x][y]=1;
  for(int i=2;i<=n*m;i++){
    int nx=x+dx[dir_num],ny=y+dy[dir_num];
    if(!InRange(nx,ny)||visit[nx][ny]!=0)
      dir_num=(dir_num+1)%4;
    x=x+dx[dir_num];y=y+dy[dir_num];
    visit[x][y]=1;
    arr[x][y]=i;
  } 
  for(int i=1;i<=n;i++){
    for(int j=1;j<=m;j++)
      printf("%d ",arr[i][j]);
    printf("\n");
  }
  return 0;
}