#include <stdio.h>
#include <iostream>

using namespace std;

int A_location[1000001];
int B_location[1000001];

int main(){
  int a,b;
  (void)scanf("%d %d",&a,&b);
  int time_a=1;
  int time_b=1;
  int ans=-1;
  for(int i=0;i<a;i++){
    char dire;int t;
    cin >> dire >> t;
    while(t--){
      if(dire=='R')
        A_location[time_a]=A_location[time_a-1]+1;
      else
        A_location[time_a]=A_location[time_a-1]-1;
      time_a++;
    }
  }
  for(int i=0;i<b;i++){
    char dire;int t;
     cin >> dire >> t;
    while(t--){
      if(dire=='R')
        B_location[time_b]=B_location[time_b-1]+1;
      else
        B_location[time_a]=B_location[time_b-1]-1;
        time_b++;
    }
  }
  for(int i=1;i<time_a;i++){
    if(A_location[i]==B_location[i]){
      ans=i;
      break;}
  }
  printf("%d",ans);
  return 0;
}