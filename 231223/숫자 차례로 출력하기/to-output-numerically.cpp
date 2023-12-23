#include <stdio.h>

void reverse(int x){
  if(x==0)
    return;
  reverse(x-1);
  printf("%d ",x);
}
void reverse2(int x){
  if(x==0)
    return;
  printf("%d ",x);
  reverse2(x-1);
}

int main(){
  int n;
  (void)scanf("%d",&n);
  reverse(n);
  printf("\n");
  reverse2(n);
  return 0;
}