#include <stdio.h>
#include <algorithm>
#include <climits>

using namespace std;

int dev[7];

int GetDiff(int a,int b,int c,int d){
  int sum1=dev[a]+dev[b];
  int sum2=dev[c]+dev[d];
  int sum3=0;
  for(int i=1;i<=6;i++){
    sum3+=dev[i];
  }
  sum3=sum3-sum2-sum1;
  int ret = abs(sum1 - sum2);
  ret = max(ret, abs(sum2 - sum3));
  ret = max(ret, abs(sum3 - sum1));
  return ret;
}

int main(){
  int min_diff=INT_MAX;
  for(int i=1;i<=6;i++){
    (void)scanf("%d",&dev[i]);
  }
  for(int i=1;i<=6;i++){
    for(int j=1;j<=6;j++){
      for(int k=1;k<=6;k++){
        for(int l=1;l<=6;l++){
          if(i==j||i==k||i==l||j==k||j==l||k==l) continue;
          min_diff=min(min_diff,GetDiff(i,j,k,l));
        }
      }
    }
  }
  printf("%d",min_diff);
  return 0;
}