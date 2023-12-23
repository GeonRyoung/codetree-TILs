#include <stdio.h>

int sum(int x){
  if(x==1)
    return 1;
  if(x==2)
    return 2;
  return sum(x-2)+x;
}
  

int main(){
  int n;
  (void)scanf("%d",&n);
  printf("%d",sum(n));
  return 0;
}