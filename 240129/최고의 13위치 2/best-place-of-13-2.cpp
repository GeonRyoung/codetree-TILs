#include <stdio.h>
#include <cstdlib>
#include <algorithm>

using namespace std;

int arr[21][21];
int visit[21][21];
int n;

int main(){
  (void)scanf("%d",&n);
  for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++)
      (void)scanf("%d",&arr[i][j]);
  }
  int cnt=0;
  for(int i=1;i<=n;i++){
    for(int j=0;j<=n-2;j++){
      for(int k=0;k<=n;k++){
        for(int l=0;l<=n-2;l++){
          if(i==k&&abs(j-1)<=2)
            continue;
          int cnt1=arr[i][j]+arr[i][j+1]+arr[i][j+2];
          int cnt2=arr[k][l]+arr[k][l+1]|arr[k][l+2];
          cnt=max(cnt,cnt1+cnt2);
        }
      }
    }
  }
  printf("%d",cnt);
  return 0;
}