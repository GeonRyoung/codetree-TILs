#include <stdio.h>

int sum=0;

int specnum(int x){
  if(x==1)
    return sum;
  if(x%2==0){
    sum+=1;
    return specnum(x/=2);
  }
  else{
    sum+=1;
    return specnum(3*x+1);
  }
}

int main(){
  int n;
  (void)scanf("%d",&n);
  printf("%d",specnum(n));
}