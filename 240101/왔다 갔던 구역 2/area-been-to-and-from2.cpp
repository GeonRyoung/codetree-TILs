#include <stdio.h>

int main(){
  int n;
  (void)scanf("%d",&n);
  int arr[1000]={};
  int cnt=500;
  int ans=0;
  for(int i=0;i<n;i++){
    int x;char di;
    (void)scanf("%d %c",&x,&di);
    if(di=='R'){
      for(int i=0;i<x;i++)
        arr[cnt++]+=1;
    }
    else if(di=='L'){
      for(int i=0;i<x;i++){
        arr[cnt--]+=1;
      }
    }
  }
  for(int i=0;i<1000;i++){
    if(arr[i]>=2)
      ans++;
  }
  printf("%d",ans);
}