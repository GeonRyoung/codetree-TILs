#include <stdio.h>
#include <algorithm>
#include <climits>

using namespace std;

char arr[10001];

int main(){
  int n,k;
  (void)scanf("%d %d",&n,&k);
  for(int i=1;i<=n;i++){
    int num;char fence;
    (void)scanf(" %d %c",&num,&fence);
    arr[num]=fence;
  }
  int cnt=INT_MIN;
  for(int i=1;i<=10001-k;i++){
    int sum=0;
    for(int j=i;j<=i+k;j++){
      if(arr[j]=='G') sum+=1;
      if(arr[j]=='H') sum+=2;
    }
    cnt=max(cnt,sum);
  }
  printf("%d",cnt);
  return 0;
}