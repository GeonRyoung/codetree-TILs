#include <stdio.h>
#include <iostream>
#include <climits>
#include <cmath>

using namespace std;

int x[100];
int y[100];

int main(){
  int n;
  (void)scanf("%d",&n);
  for(int i=1;i<=n;i++){
    cin >> x[i] >> y[i];
  }
  int min=INT_MAX;
  int pos_x,pos_y;
  for(int i=2;i<n;i++){
    int sum=0;
    pos_x=x[1],pos_y=y[1];
    for(int j=2;j<=n;j++){
      if(j==i)
        continue;
      else{
        sum+=abs(pos_x-x[j])+abs(pos_y-y[j]);
        pos_x=x[j],pos_y=y[j];
      }
    }
    if(sum<min)
      min=sum;
  }
  printf("%d",min);
}