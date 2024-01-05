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
  for(int i=1;i<=n;i++){
    for(int j=1;j<=m;j++){
      if(penalty[j]==i){
        point[i]+=1;
      }
      if(point[i]==k){
        ans=i;
        break;
      }
    }
  }
  printf("%d",ans);
  return 0;
}