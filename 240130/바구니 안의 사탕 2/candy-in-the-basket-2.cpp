#include <stdio.h>
#include <algorithm>

using namespace std;

#define MAX_NUM 101

int point[MAX_NUM];

int main(){
  int n,k;
  (void)scanf("%d %d",&n,&k);
  for(int i=1;i<=n;i++){
    int a,b;
    (void)scanf("%d %d",&a,&b);
    point[b]+=a;
  }
  int cnt=0;
  for(int i=0;i<=MAX_NUM;i++){
    int sum=0;
    for(int j=i-k;j<=i+k;j++){
      if(j>=0&&j<=MAX_NUM)
        sum+=point[j];
    }
    cnt=max(cnt,sum);
  }
  printf("%d",cnt);
}