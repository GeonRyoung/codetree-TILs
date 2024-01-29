#include <stdio.h>
#include <algorithm>

using namespace std;

int arr[101];

int main(){
  int n,k;
  (void)scanf("%d %d",&n,&k);
  for(int i=0;i<n;i++)
    (void)scanf("%d",&arr[i]);
  int max_val=0;
  for(int i=0;i<=n-k;i++){
    int sum=0;
    for(int j=i;j<i+k;j++){
      sum+=arr[j];
    }
    max_val=max(max_val,sum);
  }
  printf("%d",max_val);
  return 0;
}