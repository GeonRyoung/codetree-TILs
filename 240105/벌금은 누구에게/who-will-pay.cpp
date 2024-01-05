#include <stdio.h>
#include <iostream>

using namespace std;

int penalty[10001];
int point[10001];

int main(){
  int n,m,k;
  int ans=-1;
  cin >> n >> m >> k;
  for(int i=1;i<=m;i++){
    cin >> penalty[i];
  }
  for(int i=1;i<=m;i++){
    for(int j=1;j<=n;j++){
      if(penalty[i]==j){
        point[j]+=1;
      }
    }
  }
  for(int j=1;j<=n;j++){
    if(point[j]>=k){
      ans=j;
      break;
    }
  }
  printf("%d",ans);
  return 0;
}