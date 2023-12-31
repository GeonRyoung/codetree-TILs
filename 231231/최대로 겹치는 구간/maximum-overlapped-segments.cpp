#include <stdio.h>

int main(){
  int n;
  (void)scanf("%d",&n);
  int arr[200]={};
  for(int i=0;i<n;i++){
    int a,b;
    (void)scanf("%d %d",&a,&b);
    if(a>0&&b>0){
      for(int i=a;i<b;i++){
        arr[i]+=1;
      }
    }
    else if(a<0&&b<0){
      for(int i=101;i<=(-1*a)+100;i++){
        arr[i]+=1;
      }
      for(int i=1;i<b;i++){
        arr[i]+=1;
      }
    }
    else{
      for(int i=(-1*b)+100;i<(-1*a)+100;i++)
        arr[i]+=1;
    }
  }
  int max=0;
  for(int i=1;i<200;i++){
    if(arr[i]>max)
      max=arr[i];
  }
  printf("%d",max);
  return 0;
}