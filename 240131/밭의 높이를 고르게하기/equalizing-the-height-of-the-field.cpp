#include <stdio.h>
#include <algorithm>
#include <climits>

using namespace std;

int arr[101];
int test[101];

int main(){
  int n,h,t;
  (void)scanf("%d %d %d",&n,&h,&t);
  for(int i=1;i<=n;i++)
    (void)scanf("%d",&arr[i]);
  int min_cost=INT_MAX;
  for(int i=1;i<=n-t+1;i++){
    int cost=0;
    for(int j=1;j<=n;j++)
      test[j]=arr[j];
    for(int j=i;j<i+t;j++){
      while(true){
        if(test[j]==h) break;
        else if(test[j]>h) test[j]--;
        else test[j]++;
        cost++;
      }
    }
    min_cost=min(min_cost,cost);
  }
  printf("%d",min_cost);
  return 0;
}