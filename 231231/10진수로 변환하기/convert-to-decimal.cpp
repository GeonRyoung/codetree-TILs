#include <stdio.h>

int main(){
  int n;
  (void)scanf("%d",&n);
  int arr[10];
  int cnt=0;
  int num=0;
  while(true){
    if(n<10){
      arr[cnt++]=n;
      break;
    }
    arr[cnt++]=n%10;
    n/=10;
  }
  for(int i=cnt-1;i>=0;i--){
    num=num*2+arr[i];
  }
  printf("%d",num);
}