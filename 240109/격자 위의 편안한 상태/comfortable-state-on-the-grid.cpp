#include <stdio.h>

int arr[101][101];
int dx[4]={0,1,0,-1},dy[4]={1,0,-1,0};
int n,m;

bool InRange(int x,int y){
  return (x>0&&x<=n&&y>0&&y<=n);
}

bool comfortable(int x,int y){
  int cnt=0;
  for(int i=0;i<4;i++){
    int nx=x+dx[i],ny=y+dy[i];
    if(InRange(nx,ny)&&arr[nx][ny]==1)
      cnt++;
  }
  return (cnt==3);
}

int main(){
  (void)scanf("%d %d",&n,&m);
  for(int i=1;i<=m;i++){
    int r,c;
    (void)scanf("%d %d",&r,&c);
    arr[r][c]=1;
    if(comfortable(r,c))
      printf("1\n");
    else
      printf("0\n");
  }
  return 0;
}