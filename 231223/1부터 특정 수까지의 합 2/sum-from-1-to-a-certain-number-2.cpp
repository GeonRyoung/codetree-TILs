#include <stdio.h>

int sum(int x){
  if(x==1)
    return 1;
  return sum(x-1)+x;  
}

int main(){
  int n;
  (void)scanf("%d",&n);
  printf("%d",sum(n));
}