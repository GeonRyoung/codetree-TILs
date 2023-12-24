#include <stdio.h>

int getN(int x){
  if(x==1)
    return 2;
  if(x==2)
    return 4;
  return (getN(x-1)*getN(x-2)%100);
}

int main(){
  int n;
  (void)scanf("%d",&n);
  printf("%d",getN(n));
  return 0;
}