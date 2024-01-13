#include <stdio.h>
#include <iostream>
#include <climits>
#include <algorithm>

using namespace std;

int arr[21][21];

int main(){
  int n;
  (void)scanf("%d",&n);
  for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++)
      (void)scanf("%d",&arr[i][j]);
  }
  int max_cnt=INT_MIN;
  for(int i=1;i<=n;i++){
    for(int j=1;j<=n-2;j++)
      max_cnt=max(max_cnt,arr[i][j]+arr[i][j+1]+arr[i][j+2]);
  }
  printf("%d",max_cnt);
  return 0;
}