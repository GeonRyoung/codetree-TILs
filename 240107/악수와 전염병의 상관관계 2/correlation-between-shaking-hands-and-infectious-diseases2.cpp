#include <stdio.h>
#include <iostream>
#include <algorithm>

using namespace std;

int infect[100];
int infect_cnt[100];

class Infect{
  public:
    int t,x,y,cnt;
    Infect(int t,int x,int y){
      this->t=t;
      this->x=x;
      this->y=y;
    }
  Infect(){}
};

bool cmp(Infect a,Infect b){
  if(a.t<b.t)
    return true;
  else
    return false;
}

int main(){
  int N,K,P,T;
  (void)scanf("%d %d %d %d",&N,&K,&P,&T);
  infect[P-1]=1;
  Infect infect_list[251];
  for(int i=0;i<T;i++){
    int t,x,y;
    (void)scanf("%d %d %d",&t,&x,&y);
    infect_list[i]=Infect(t,x-1,y-1);
    }
  sort(infect_list,infect_list+T,cmp);  
  for(int i=0;i<T;i++){
    if(infect_cnt[infect_list[i].x]<K&&infect[infect_list[i].x]==1){
      infect_cnt[infect_list[i].x]++;
      infect[infect_list[i].y]=1;
    }
    if(infect_cnt[infect_list[i].y]<K&&infect[infect_list[i].y]==1){
      infect_cnt[infect_list[i].y]++;
      infect[infect_list[i].x]=1;
    }
  }
  for(int i=0;i<N;i++){
    printf("%d",infect[i]);
  }
  return 0;
}