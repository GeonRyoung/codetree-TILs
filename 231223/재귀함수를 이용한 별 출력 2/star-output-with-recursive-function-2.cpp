#include <stdio.h>

void printreverse(int n){
  if(n==0)
    return;
  for(int i=0;i<n;i++)
    printf("* ");
  printf("\n");
  printreverse(n-1);
  for(int i=0;i<n;i++)
    printf("* ");
  printf("\n");
}

int main(){
  int n;
  (void)scanf("%d",&n);
  printreverse(n);
  return 0;
}