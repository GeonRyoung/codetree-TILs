#include <stdio.h>
#include <algorithm>
#include <climits>

#define MAX_NUM 101

using namespace std;

int arr[101];

int main(){
  int n;
  (void)scanf("%d",&n);
  for(int i=1;i<=n;i++){
    int a;char b;
    (void)scanf(" %d %c",&a,&b);
    if(b=='G') arr[a]=1;
    else if(b=='H') arr[a]=2;
  }
  int ans=0;
  for(int i=1;i<=MAX_NUM;i++){
    for(int j=i+1;j<=MAX_NUM;j++){
      if(arr[i]==0 || arr[j]==0) continue;
      int cnt_g=0,cnt_h=0;
      for(int k=i;k<=j;k++){
        if(arr[k]==1) cnt_g++;
        if(arr[k]==2) cnt_h++;
      }
      if(cnt_g==0||cnt_h==0||cnt_g==cnt_h){
        ans=max(ans,(j-i));
      }
    }
  }
  printf("%d",ans);
  return 0;
}