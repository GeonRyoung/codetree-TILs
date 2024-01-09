#include <stdio.h>

int n;
int arr[101][101];
int visit[101][101];
int dx[4]={0,1,0,-1},dy[4]={1,0,-1,0};

int dire(char x){
  if(x=='E') return 0;
  else if(x=='S') return 1;
  else if(x=='W') return 2;
  else return 3;
}


int main(){
  (void)scanf("%d",&n);
  int x=1,y=1,cnt=0;;
  for(int i=0;i<n;i++){
    char dir;int dis;int endflag=0;
    (void)scanf(" %c %d",&dir,&dis);
    int dir_num=dire(dir);
    for(int i=0;i<dis;i++){
      x=x+dx[dir_num],y=y+dy[dir_num];
      cnt++;
      if(x==1&&y==1){
        endflag=1;
        break;
      }
    }
    if(endflag) break;
  }
  if(x==1&&y==1) 
    printf("%d",cnt);
  else 
    printf("-1");
  return 0;
}