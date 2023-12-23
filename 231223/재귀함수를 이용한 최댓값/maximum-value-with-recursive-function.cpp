#include <stdio.h>
#include <algorithm>

using namespace std;

int arr[100];
int max1(int x){
  if(x==0)
    return arr[0];
  return max(max1(x-1),arr[x]);
}


int main(){
  int n;
  (void)scanf("%d",&n);
  for(int i=0;i<n;i++){
    (void)scanf("%d",&arr[i]);
  }
  printf("%d",max1(n));
  return 0;
}