#include <stdio.h>
#include <algorithm>
#include <climits>
#include <cmath>

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
    for(int j=i+1;j<=n;j++){
      int dis=pow((abs(pos[i][0]-pos[j][0])),2)+pow((abs(pos[i][1]-pos[j][1])),2);
      ans=min(ans,dis);
    }
  }
  printf("%d",ans);
  return 0;
}