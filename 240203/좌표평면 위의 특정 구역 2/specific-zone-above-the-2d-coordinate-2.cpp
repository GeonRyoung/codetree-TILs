#include <stdio.h>
#include <algorithm>
#include <climits>

using namespace std;
int pos[101][2];

int main(){
  int n;
  (void)scanf("%d",&n);
  for(int i=1;i<=n;i++){
    (void)scanf("%d %d",&pos[i][0],&pos[i][1]);
  }
  int ans=INT_MAX;
  for(int i=1;i<=n;i++){
    int max_x=1,max_y=1,min_x=INT_MAX,min_y=INT_MAX;
    for(int j=1;j<=n;j++){
      if(i==j) continue;
      max_x=max(max_x,pos[j][0]);
      min_x=min(min_x,pos[j][0]);
      max_y=max(max_y,pos[j][1]);
      min_y=min(min_y,pos[j][1]);
    }
    ans=min(ans,(max_x-min_x)*(max_y-min_y));
  }
  printf("%d",ans);
  return 0;
}