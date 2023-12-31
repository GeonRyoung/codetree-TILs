#include <stdio.h>

int main(){
  int n;
  (void)scanf("%d",&n);
  int arr[100]={};
  int cnt=0;
  while(true){
    if(n<2){
      arr[cnt++]=n;
      break;
    }
    arr[cnt++]=n%2;
    n/=2;
  }
  for(int i=cnt-1;i>=0;i--){
    printf("%d",arr[i]);
  }
  return 0;
}