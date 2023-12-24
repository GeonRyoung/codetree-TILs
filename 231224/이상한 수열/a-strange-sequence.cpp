#include  <stdio.h>

int number(int n){
  if(n==1)
    return 1;
  if(n==2)
    return 2;
  return number(n/3)+number(n-1);
}

int main(){
  int n;
  (void)scanf("%d",&n);
  printf("%d",number(n));
  return 0;
}