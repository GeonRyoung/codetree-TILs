#include <stdio.h>

int sum=0;
int work(int x){
  if(x==1)
    return sum;
  if(x%2==0){
    x/=2;
    sum+=1;
    return work(x);
  }
  else{
    x/=3;
    sum+=1;
    return work(x);
  }
}

int main(){
  int n;
  (void)scanf("%d",&n);
  printf("%d",work(n));
}