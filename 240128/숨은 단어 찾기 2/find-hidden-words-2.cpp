#include <stdio.h>

#define dir_num 8

char arr[51][51];
int n,m;

int dx[dir_num]={1,1,1,-1,-1,-1,0,0};
int dy[dir_num]={-1,0,1,-1,0,1,-1,1};

bool InRange(int x,int y){
  return (x>=1&&x<=n&&y>=1&&y<=m);
}

int main(){
  int ans=0;
  (void)scanf("%d %d",&n,&m);
  for(int i=1;i<=n;i++){
    for(int j=1;j<=m;j++)
      (void)scanf(" %c",&arr[i][j]);
  }
  for(int i=1;i<=n;i++){
    for(int j=1;j<=m;j++){
      if(arr[i][j]!='L')
        continue;
      for(int k=0;k<dir_num;k++){
        int curt=0;
        int curx=i;
        int cury=j;
        while(true){
          int nx=curx+dx[k];
          int ny=cury+dy[k];
          if(!InRange(nx,ny)) break;
          if(arr[nx][ny]!='E') break;
          curx=nx;
          cury=ny;
          curt++;
        }
        if(curt>=2) ans++;
      }
    }
  }
  printf("%d",ans);
  return 0;
}