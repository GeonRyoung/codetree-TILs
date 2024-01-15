#include <stdio.h>
#include <iostream>
#include <climits>
#include <cmath>

using namespace std;

int count[100];
int y[100];

int main(){
  int n;
  (void)scanf("%d",&n);
  for(int i=1;i<=n;i++)
    (void)scanf("%d",&count[i]);
  int min=INT_MAX;
  count[0]=count[n];
  for(int i=1;i<=n;i++){             //i=첫번째 테이블
    int cnt=1;
    int sum=0;
    for(int j=i;j<=n+i;j++){
      if(j%n==i%n){
        continue;}
      else{
        sum+=count[j%n]*cnt;
        cnt++;
      }
    }
    if(sum<min)
      min=sum;
  }
  printf("%d",min);
  return 0;
}