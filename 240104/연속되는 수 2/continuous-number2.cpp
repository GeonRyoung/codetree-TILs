#include <stdio.h>
#include <algorithm>

using namespace std;

int arr[1001];

int main(){
  int n;
  int cnt=0;int ans=0;
  (void)scanf("%d",&n);
  for(int i=0;i<n;i++){
    (void)scanf("%d",&arr[i]);
  }
  for(int i=0;i<n;i++){
    if(i==0||arr[i]!=arr[i-1])
      cnt=1;
    else
      cnt++;
    ans=max(ans,cnt);
  }
  printf("%d",ans);
  return 0;
}