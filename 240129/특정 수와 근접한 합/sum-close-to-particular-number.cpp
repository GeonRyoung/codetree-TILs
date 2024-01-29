#include <stdio.h>
#include <cstdlib>
#include <algorithm>
#include <climits>

#define MAX 101

int arr[MAX];

using namespace std;
int main(){
  int n,s;
  (void)scanf("%d %d",&n,&s);
  for(int i=1;i<=n;i++){
    (void)scanf("%d",&arr[i]);
  }
  int sum=0;
  for(int i=1;i<=n;i++){
    sum+=arr[i];
  }
  int cnt=INT_MAX;
  int cnt_max=INT_MIN;
  for(int i=1;i<=n;i++){
    for(int j=i+1;j<=n;j++){
      int ex=abs(sum-arr[i]-arr[j]);
      int close=abs(s-ex);
      cnt=min(cnt,close);
      cnt_max=max(cnt_max,cnt);
    }
  }
  printf("%d",cnt);
}