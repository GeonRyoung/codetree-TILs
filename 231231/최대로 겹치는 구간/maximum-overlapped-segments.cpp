#include <stdio.h>

int main(){
  int n;
  (void)scanf("%d",&n);
  int arr[300]={};
  for(int i=0;i<n;i++){
    int a,b;
    (void)scanf("%d %d",&a,&b);
      for(int i=a+100;i<b+100;i++)
        arr[i]+=1;
  }  
  int max=0;
  for(int i=1;i<200;i++){
    if(arr[i]>max)
      max=arr[i];
  }
  printf("%d",max);
  return 0;
}