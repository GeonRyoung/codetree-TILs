#include <stdio.h>

void printHW(int x){
  if(x==0)
    return;
  printHW(x-1);
  printf("HelloWorld\n");
}

int main(){
  int n;
  (void)scanf("%d",&n);
  printHW(n);
}