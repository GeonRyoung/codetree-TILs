#include <stdio.h>

#define MAX_NUM 101

int arr[MAX_NUM+1];
int point[MAX_NUM+1];
int visit[MAX_NUM+1];

int main(){
  int n,m;
  (void)scanf("%d %d",&n,&m);
  for(int i=1;i<=n;i++)
    (void)scanf("%d",&arr[i]);
  for(int i=1;i<=m;i++){
    int a;
    (void)scanf("%d",&a);
    point[a]++;
  }
  int cnt=0;
  for(int i=1;i<=n-m+1;i++){
    for(int j=1;j<=n;j++){
      visit[j]=point[j];
    }
    for(int j=i;j<i+m;j++){
      visit[arr[j]]--;
    }
    bool check=true;
    for(int j=1;j<=MAX_NUM;j++){
      if(visit[j]!=0){
        check=false;
        break;
      }
    }
    if(check)
      cnt++;
  }
  printf("%d",cnt);
  return 0;
}