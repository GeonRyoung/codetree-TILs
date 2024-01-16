#include <stdio.h>
#include <iostream>
#include <climits>
#include <cmath>

using namespace std;

int arr[21];

int a[5];
int b[5];
int c[5];

bool carry(int x,int y,int z){
  int cnt=0;
  while(x){
    if(x<10)
      a[cnt++]=x;
    else
      a[cnt++]=x%10;
    x/=10;
  }
  cnt=0;
  while(y){
    if(y<10)
      b[cnt++]=y;
    else
      b[cnt++]=y%10;
    y/=10;
  }
  cnt=0;
  while(z){
    if(z<10)
      c[cnt++]=z;
    else
      c[cnt++]=z%10;
    z/=10;
  }
  for(int i=0;i<5;i++){
    if(a[i]+b[i]+c[i]>10)
      return false;
  }
  return true;
}

int main(){
  int n;
  int max_cnt=INT_MIN;
  (void)scanf("%d",&n);
  for(int i=1;i<=n;i++){
    (void)scanf("%d",&arr[i]);
  }
  for(int i=1;i<=n-2;i++){
    for(int j=i+1;j<=n-1;j++){
      for(int k=j+1;k<=n;k++){
        if(carry(arr[i],arr[j],arr[k])){
          max_cnt=(max(max_cnt,arr[i]+arr[j]+arr[k]));
        }
      }
    }
  }
  printf("%d",max_cnt);
  return 0;
}