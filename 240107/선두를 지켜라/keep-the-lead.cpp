#include <stdio.h>

int pos_n[1000001];
int pos_m[1000001];
int compare[1000001];
int main(){
  int n,m;
  int time_n=1;
  int time_m=1;
  int ans=0;
  (void)scanf("%d %d",&n,&m);
  for(int i=0;i<n;i++){
    int v,t;
    (void)scanf("%d %d",&v,&t);
    for(int i=0;i<t;i++){
      pos_n[time_n]=pos_n[time_n-1]+v;
      time_n++;
    }
  }
  for(int i=0;i<m;i++){
    int v,t;
    (void)scanf("%d %d",&v,&t);
    for(int i=0;i<t;i++){
      pos_m[time_m]=pos_m[time_m-1]+v;
      time_m++;
    }
  }
  for(int i=1;i<time_n;i++){
    if(pos_n[i]>pos_m[i])
      compare[i]=1;
    else if(pos_n[i]<pos_m[i])
      compare[i]=-1;
    else
      compare[i]=0;
  }
  for(int i=2;i<time_n;i++){
    if(compare[i-1]*compare[i]==-1)
      ans++;
    if(i>=3&&compare[i-2]*compare[i]==-1&&compare[i-1]==0)
      ans++;
  }
  printf("%d",ans);
  
}