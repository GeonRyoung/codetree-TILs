#include <stdio.h>
#include <iostream>
#include <algorithm>

#define OFFSET 50000;

using namespace std;

int pos_n[1000001];
int pos_m[1000001];

int main(){
  int n,m;
  int time_n=1;
  int time_m=1;
  int ans=0;
  (void)scanf("%d %d",&n,&m);
  for(int i=0;i<n;i++){
    int t;char d;
    cin >> t >> d;
    while(t--){
      if(d=='R')
        pos_n[time_n]=pos_n[time_n-1]+1;
      else
        pos_n[time_n]=pos_n[time_n-1]-1;
      time_n++;
    }
  }
  for(int i=0;i<m;i++){
    int t;char d;
    cin >> t >> d;
    while(t--){
      if(d=='R')
        pos_m[time_m]=pos_m[time_m-1]+1;
      else
        pos_m[time_m]=pos_m[time_m-1]-1;
      time_m++;
    }
  }
  int max_time=max(time_n,time_m);
  if(time_n<max_time){
    for(int i=time_n;i<=max_time;i++){
      pos_n[i]=pos_n[i-1];
    }
  }
  else if(time_m<max_time){
    for(int i=time_m;i<=max_time;i++){
      pos_m[i]=pos_m[i-1];
    }
  }
  for(int i=2;i<max_time;i++){
    if(pos_n[i-1]!=pos_m[i-1]&&pos_n[i]==pos_m[i]){
      ans++;
    }
  }
  printf("%d",ans);
}