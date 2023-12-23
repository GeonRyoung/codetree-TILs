#include <stdio.h>

int arr[100];

int arrsum(int x,int y){
  int sum=0;
  for(int i=x-1;i<y;i++){
    sum+=arr[i];
  }
  return sum;
}

int main(){
  int a,b;
  (void)scanf("%d %d",&a,&b);
  for(int i=0;i<a;i++){
    (void)scanf("%d",&arr[i]);
  }
  for(int i=0;i<b;i++){
    int c,d;
    (void)scanf("%d %d",&c,&d);
    printf("%d\n",arrsum(c,d));
  }
  return 0;
}