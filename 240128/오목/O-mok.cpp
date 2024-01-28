#include <stdio.h>

#define dir_num 8

int arr[20][20];

int dx[dir_num]={1,1,1,-1,-1,-1,0,0};
int dy[dir_num]={-1,0,1,-1,0,1,-1,1};

bool InRange(int x,int y){
  return (x>=1&&x<=19&&y>=1&&y<=19);
}

int main(){
  for(int i=1;i<=19;i++){
    for(int j=1;j<=19;j++)
      (void)scanf("%d",&arr[i][j]);
  }
  for(int i=1;i<=19;i++){
    for(int j=1;j<=19;j++){
      if(arr[i][j]==0) continue;
      for(int k=0;k<dir_num;k++){
        int cur_t=1;
        int cur_x=i;
        int cur_y=j;
        while(true){
          int nx=cur_x+dx[k];
          int ny=cur_y+dy[k];
          if(!InRange(nx,ny))
            break;
          if(arr[nx][ny]!=arr[i][j])
            break;
          cur_t++;
          cur_x=nx;
          cur_y=ny;
        }
        if(cur_t==5){
          printf("%d\n",arr[i][j]);
          printf("%d %d",i+2*dx[k],j+2*dy[k]);
          return 0;
        }
      }
    }
  }
  printf("0");
  return 0;
}