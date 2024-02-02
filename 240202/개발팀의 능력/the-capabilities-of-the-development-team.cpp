#include <stdio.h>
#include <algorithm>
#include <climits>

using namespace std;

int dev[7];
int ret;

int GetDiff(int a,int b,int c,int d){
  int sum1=dev[a]+dev[b];
  int sum2=dev[c]+dev[d];
  int sum3=0;
  for(int i=1;i<=5;i++){
    sum3+=dev[i];
  }
  sum3=sum3-sum2-sum1;
  if(sum1==sum2||sum2==sum3||sum1==sum3)
    return -1;
  ret = abs(sum1 - sum2);
  ret = max(ret, abs(sum2 - sum3));
  ret = max(ret, abs(sum3 - sum1));
  return ret;
}

int main(){
  int min_diff=INT_MAX;
  bool flag=true;
  for(int i=1;i<=5;i++){
    (void)scanf("%d",&dev[i]);
  }
  for(int i=1;i<=5;i++){
    for(int j=1;j<=5;j++){
      for(int k=1;k<=5;k++){
        for(int l=1;l<=5;l++){
          if(i==j||i==k||i==l||j==k||j==l||k==l) continue;
          if(GetDiff(i,j,k,l)!=-1){
            min_diff=min(min_diff,GetDiff(i,j,k,l));
            flag=false;  
          }
        }
      }
    }
  }
  if(flag)
    printf("-1");
  else
    printf("%d",min_diff);
  return 0;
}