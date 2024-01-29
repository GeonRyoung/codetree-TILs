#include <stdio.h>
#include <algorithm>

using namespace std;

int arr[101];

int main(){
  int n;
  int cnt=0;
  (void)scanf("%d",&n);
  for(int i=1;i<=n;i++)
    (void)scanf("%d",&arr[i]);
  for(int i=1;i<=n;i++){
    for(int j=i;j<=n;j++){
      int sum=0;
      for(int k=i;k<=j;k++){
        sum+=arr[k];
      }
      double mid_val=(double)sum/(j-i+1);
      for(int k=i;k<=j;k++){
        if((double)arr[k]==mid_val){
          cnt++;
          break;
        }
      }
    }
  }
  printf("%d",cnt);
  return 0;
}