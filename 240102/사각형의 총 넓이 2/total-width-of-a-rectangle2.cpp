#include <stdio.h>

#define OFFSET 100

int arr[201][201];
int sum;
int main(){
  int N;
  (void)scanf("%d",&N);
  for(int i=0;i<N;i++){
    int x1,y1,x2,y2;
    (void)scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
    x1+=OFFSET;x2+=OFFSET;y1+=OFFSET;y2+=OFFSET;
    for(int i=x1;i<x2;i++){
      for(int j=y1;j<y2;j++)
        arr[i][j]=1;
    }
  }
  for(int i=0;i<201;i++){
    for(int j=0;j<201;j++)
      sum+=arr[i][j];
  }
  printf("%d",sum);
}