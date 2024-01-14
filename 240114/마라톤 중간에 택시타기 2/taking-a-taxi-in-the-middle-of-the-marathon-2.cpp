#include <stdio.h>
#include <iostream>
#include <climits>

using namespace std;

int x[101];
int y[101];
int arr[101];

int main(){
  int n;
  (void)scanf("%d",&n);
  for(int i=1;i<=n;i++){
    cin >> x[i] >> y[i];
  }
  int pos_x=x[0],pos_y=y[0];
  int min=INT_MAX;
  for(int i=2;i<n;i++){
    int sum=0;
    for(int j=1;j<=n;j++){
      if(j==i)
        continue;
      else{
        int temp=abs(x[j]-pos_x)+abs(y[j]-pos_y);
        pos_x=x[j],pos_y=y[j];
        sum+=temp;
      }
    }
    if(sum<min)
      min=sum;
  }
  printf("%d",min);
}