#include <stdio.h>

int main(){
  int x=0,y=0;
  int N;
  (void)scanf("%d",&N);
  for(int i=0;i<N;i++){
    char dire;int distance;
    (void)scanf(" %c %d",&dire,&distance);
    if(dire=='E')
      x+=distance;
    else if(dire=='S')
      y-=distance;
    else if(dire=='W')
      x-=distance;
    else
      y+=distance;
  }
  printf("%d %d",x,y);
}