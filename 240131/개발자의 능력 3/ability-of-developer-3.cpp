#include <stdio.h>
#include <algorithm>
#include <climits>

using namespace std;

int arr[7];

int average(int i,int j,int k){
  int sum1=arr[i]+arr[j]+arr[k];
  int sum2=0;
  for(int i=1;i<=6;i++){
    sum2+=arr[i];
  }
  sum2-=sum1;
  return abs(sum1-sum2);
}

int main(){
  for(int i=1;i<=6;i++){
    (void)scanf("%d",&arr[i]);
  }
  int cnt=INT_MAX;
  for(int i=1;i<=6;i++){
    for(int j=i+1;j<=6;j++){
      for(int k=j+1;k<=6;k++){
        cnt=min(cnt,average(i,j,k));
      }
    }
  }
  printf("%d",cnt);
  return 0;
}