#include <stdio.h>

int sum=0;
int Fibo(int x){
  if(x<=2)
    return 1;
  return Fibo(x-1)+Fibo(x-2);
  
}

int main(){
  int n;
  (void)scanf("%d",&n);
  printf("%d",Fibo(n));
}