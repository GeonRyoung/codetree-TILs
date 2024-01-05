#include <stdio.h> 
#include <algorithm>

using namespace std;

double pos_n[1000001];
double pos_m[1000001];

int main(){
  int N,M;
  int time_n=1;int time_m=1;
  int ans=0;
  (void)scanf("%d %d",&N,&M);
  for(int i=0;i<N;i++){
    double v,t;
    double one_hour;
    (void)scanf("%lf %lf",&v,&t);
    one_hour=t/v;
    for(int j=0;j<v;j++){
      pos_n[time_n++]+=one_hour;
    }
  }
  for(int i=0;i<M;i++){
    double v,t;
    double one_hour;
    (void)scanf("%lf %lf",&v,&t);
    one_hour=t/v;
    for(int j=0;j<v;j++){
      pos_m[time_m++]+=one_hour;
    }
  }
  for(int i=2;i<max(time_n,time_m);i++){
    if(pos_n[i-1]>pos_m[i-1]&&pos_n[i]<pos_m[i])
      ans+=1;
    else if(pos_n[i-1]<pos_m[i-1]&&pos_n[i]>pos_m[i])
      ans+=1;
  }
  printf("%d",ans);
}