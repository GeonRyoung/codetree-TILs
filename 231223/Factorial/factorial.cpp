#include <stdio.h>

int sum=0;
int Factorial(int x){
  if(x==1)
    return 1;
  return Factorial(x-1)*x;
  
}

int main(){
  int n;
  (void)scanf("%d",&n);
  printf("%d",
    Factorial(n));
}