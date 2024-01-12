#include <stdio.h>
#include <iostream>
#include <climits>

using namespace std;

int arr[101];

int main(){
  int n;
  int ans=0;
  (void)scanf("%d",&n);
  for(int i=1;i<=n;i++){
    (void)scanf("%d",&arr[i]);
  }
  for(int i=1;i<=n;i++){
    for(int j=i+1;j<=n;j++){
      for(int k=j+1;k<=n;k++){
        if(arr[i]<=arr[j]&&arr[j]<=arr[k])
          ans++;
      }
    }
  }
  printf("%d",ans);
  return 0;
}