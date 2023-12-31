#include <stdio.h>

int main(){
  int N,B;
  (void)scanf("%d %d",&N,&B);
  int arr[20]={};
  int cnt=0;
  while(true){
    if(N<B){
      arr[cnt++]=N;
      break;
    }
    arr[cnt++]=N%B;
    N/=B;
  }
  for(int i=cnt-1;i>=0;i--){
    printf("%d",arr[i]);
  }
  return 0;
}