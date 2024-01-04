#include <stdio.h>
#include <algorithm>

using namespace std;

int arr[1001];

bool tplus(int *arr,int n,int t){
  for(int i=0;i<n;i++){
    if(arr[i]>=t)
      return true;
  }
  return false;
}

int main(){
  int n,t;
  int cnt=0;int ans=0;
  (void)scanf("%d %d",&n,&t);
  for(int i=0;i<n;i++){
    (void)scanf("%d",&arr[i]);
  }
  for(int i=0;i<n;i++){
    if(arr[i]>t)
      cnt++;
    else if(arr[i]<=t)
      cnt=0;
    ans=max(ans,cnt);
  }
  if(tplus(arr,n,t))
    printf("%d",ans);
  else
    printf("0");
  return 0;
}