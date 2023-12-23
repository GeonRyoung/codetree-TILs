#include <stdio.h>

void printstar(int n){
  if(n==0)
    return;
  printstar(n-1);
  for(int i=0;i<n;i++){
    printf("*");
  }
  printf("\n");
}

int main(){
  int n;
  (void)scanf("%d",&n);
  printstar(n);
  return 0;
}