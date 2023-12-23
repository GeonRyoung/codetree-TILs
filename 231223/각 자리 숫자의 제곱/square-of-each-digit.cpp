#include <stdio.h>

int sum(int x){
  int a=(x%10)*(x%10);
  if(x<10)
    return a;
  return sum(x/10)+a;
}

int main(){
  int n;
  (void)scanf("%d",&n);
  printf("%d",sum(n));
}