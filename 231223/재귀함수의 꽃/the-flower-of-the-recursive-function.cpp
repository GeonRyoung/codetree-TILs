#include <stdio.h>

void printreverse(int n){
  if(n==0)
    return;
  printf("%d ",n);
  printreverse(n-1);
  printf("%d ",n);
  
}

int main(){
  int n;
  (void)scanf("%d",&n);
  printreverse(n);
  return 0;
}