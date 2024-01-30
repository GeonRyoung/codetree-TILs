#include <stdio.h>

#define MAX_NUM 101

int arr[MAX_NUM];
int point[MAX_NUM];

int main(){
  int n,m;
  (void)scanf("%d %d",&n,&m);
  for(int i=1;i<=n;i++)
    (void)scanf("%d",&arr[i]);
  for(int i=1;i<=m;i++){
    int a;
    (void)scanf("%d",&a);
    if(point[a]==1) continue;
    else point[a]++;
  }
  int cnt=0;
  for(int i=1;i<=n-m+1;i++){
    int sum=0;
    for(int j=i;j<i+m;j++){
      sum+=point[arr[j]];
    }
    if(sum==m)
      cnt++;
  }
  printf("%d",cnt);
  return 0;
}