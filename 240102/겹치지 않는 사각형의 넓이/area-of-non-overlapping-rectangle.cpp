#include <stdio.h>

#define OFFSET 1000

int arr[2001][2001];
int sum;
int main(){
  for(int i=0;i<2;i++){
    int x1,y1,x2,y2;
    (void)scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
    x1+=OFFSET;x2+=OFFSET;y1+=OFFSET;y2+=OFFSET;
    for(int i=x1;i<x2;i++){
      for(int j=y1;j<y2;j++)
        arr[i][j]=1;
    }
  }
  int x1,y1,x2,y2;
  (void)scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
  x1+=OFFSET;x2+=OFFSET;y1+=OFFSET;y2+=OFFSET;
  for(int i=x1;i<x2;i++){
    for(int j=y1;j<y2;j++)
      arr[i][j]=0;
  }
  for(int i=0;i<2001;i++){
    for(int j=0;j<2001;j++)
      sum+=arr[i][j];
  }
  printf("%d",sum);
}