#include <stdio.h>
#include <iostream>
#include <string>
#include <climits>

using namespace std;

int arr[100];

int main(){
  int n;
  (void)scanf("%d",&n);
  int ans=INT_MIN;
  for(int i=1;i<=n;i++){
    (void)scanf("%d",&arr[i]);
  }
  for(int i=1;i<n;i++){
    for(int j=i+1;j<=n;j++){
      if(j!=i+1){
        int sum=arr[i]+arr[j];
        if(sum>ans)
          ans=sum;
      }
    }
  }
  printf("%d",ans);
}