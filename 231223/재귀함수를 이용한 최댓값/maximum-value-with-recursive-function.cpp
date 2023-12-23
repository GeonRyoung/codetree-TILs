#include <stdio.h>

int arr[100];
int max(int x){
  if(x==1)
    return arr[x];
  return max(x-1)>arr[x]?max(x-1):arr[x];
}
  

int main(){
  int n;
  (void)scanf("%d",&n);
  for(int i=0;i<n;i++){
    (void)scanf("%d",&arr[i]);
  }
  printf("%d",max(n));
  return 0;
}