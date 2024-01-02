#include <stdio.h>

#define OFFSET 100

int arr[201][201];
int sum;
int main(){
  int n;
  (void)scanf("%d",&n);
  for(int i=0;i<n;i++){
    int x,y;
    (void)scanf("%d %d",&x,&y);
    x+=OFFSET;y+=OFFSET;
    for(int i=x;i<x+8;i++){
      for(int j=y;j<y+8;j++)
        arr[i][j]=1;
    }
  }
  for(int i=0;i<201;i++){
    for(int j=0;j<201;j++)
      sum+=arr[i][j];
  }
  printf("%d",sum);
}