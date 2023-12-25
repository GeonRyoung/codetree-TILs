#include <stdio.h>
#include <algorithm>

using namespace std;

int arr[10];

int lcm(int a, int b) {
  int gcd=1;
  for(int i=1;i<=min(a,b);i++){
    if(a%i==0 && b%i==0)
      gcd=i;
  }
  return a*b/gcd;
}

int alllcm(int n){
  if(n==1)
    return arr[1];
  return lcm(alllcm(n-1),arr[n]);
}
int main(){
  int n;
  (void)scanf("%d", &n);
  for(int i=1;i<=n;i++)
    (void)scanf("%d",&arr[i]);
  printf("%d",alllcm(n));
}