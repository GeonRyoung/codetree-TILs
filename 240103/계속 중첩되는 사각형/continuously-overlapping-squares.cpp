#include <stdio.h>

#define OFFSET 100

int sum;
int arr[201][201];

int main(){
  int n;
  (void)scanf("%d",&n);
  for(int i=1;i<=n;i++){
    int x1,y1,x2,y2;
    (void)scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
    x1+=OFFSET;x2+=OFFSET;y1+=OFFSET;y2+=OFFSET;
    if(i%2==1){
      for(int j=x1;j<x2;j++){
        for(int k=y1;k<y2;k++)
          arr[j][k]=0;
      }
    }
    if(i%2==0){
      for(int j=x1;j<x2;j++){
        for(int k=y1;k<y2;k++)
          arr[j][k]=1;
      }
    }
  }
  for(int i=0;i<202;i++){
    for(int j=0;j<202;j++){
      if(arr[i][j]==1)
        sum+=1;
    }
  }
  printf("%d",sum);
  return 0;
}