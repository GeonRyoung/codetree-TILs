#include <stdio.h>
#include <iostream>
#include <climits>
#include <cmath>

using namespace std;

int arr[21];

bool carry(int x,int y,int z){
  if(x%10+y%10+z%10>=10)
    return false;
  if(x%100/10+y%100/10+z%100/10>=10)
    return false;
  if(x%1000/100+y%1000/100+z%1000/100>=10)
    return false;
  if(x%10000/1000+y%10000/1000+z%10000/1000>=10)
    return false;
  return true;;
}
int main(){
  int n;
  int cnt=0;
  int max_cnt=INT_MIN;
  (void)scanf("%d",&n);
  for(int i=0;i<n;i++){
    (void)scanf("%d",&arr[i]);
  }
  for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
      for(int k=j+1;k<n;k++){
        if(carry(arr[i],arr[j],arr[k])){
          max_cnt=max(max_cnt,arr[i]+arr[j]+arr[k]);
          cnt++;
        }
      }
    }
  }
  if(cnt==0)
    printf("-1");
  else
    printf("%d",max_cnt);
  return 0;
}