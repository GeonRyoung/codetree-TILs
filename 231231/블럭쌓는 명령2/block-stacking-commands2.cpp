#include <stdio.h>

int main(){
  int arr[100]={0};
  int N,k;
  (void)scanf("%d %d",&N,&k);
  for(int i=0;i<k;i++){
    int a,b;
    (void)scanf("%d %d",&a,&b);
    for(int i=a;i<=b;i++){
      arr[i]+=1;
    }
  }
  int max=0;
  for(int i=0;i<N;i++){
    if(arr[i]>max)
      max=arr[i];
  }
  printf("%d",max);
}