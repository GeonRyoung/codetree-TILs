#include <stdio.h>

int mul(int x,int y,int z){
  return x*y*z;
}
int sum(int x){
  if(x<10)
    return x;
  return sum(x/10)+x%10;
}

int main(){
  int a,b,c;
  (void)scanf("%d %d %d",&a,&b,&c);
  printf("%d",sum(mul(a,b,c)));
  return 0;
}