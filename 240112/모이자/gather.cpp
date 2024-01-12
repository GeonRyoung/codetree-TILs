#include <stdio.h>
#include <iostream>
#include <climits>
#include <cstdlib>

using namespace std;

int arr[101];
int sum[101];

int main(){
  int n;
  int min=INT_MAX;
  (void)scanf("%d",&n);
  for(int i=1;i<=n;i++){
    (void)scanf("%d",&arr[i]);
  }
  for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
      int seq=abs(i-j);
      sum[i]+=arr[j]*seq;
    }
  }
  for(int i=1;i<=n;i++){
    if(sum[i]<min)
      min=sum[i];
  }
  printf("%d",min);
  return 0;
}