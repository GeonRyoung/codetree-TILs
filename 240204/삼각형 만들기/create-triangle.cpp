#include <stdio.h>
#include <algorithm>
#include <cmath>
#include <functional>
#include <climits>

using namespace std;

int n;
int x[101],y[101];

int width(int a,int b,int c){
  return abs((x[a]*y[b]+x[b]*y[c]+x[c]*y[a])-(x[b]*y[a]+x[c]*y[b]+x[a]*y[c]));
}

int pal(int a,int b){
  return (x[a]-x[b])+(y[a]-y[b]);
}

bool check(int a,int b,int c){
  int line[3];
  line[0]=pow(pal(a,b),2);
  line[1]=pow(pal(b,c),2);
  line[2]=pow(pal(a,c),2);
  sort(line,line+3,greater<int>());
  if(line[0]==line[1]+line[2]) return true;
  return false;
}

int main(){
  (void)scanf("%d",&n);
  for(int i=1;i<=n;i++){
    (void)scanf("%d %d",&x[i],&y[i]);
  }
  int ans=INT_MIN;
  for(int i=1;i<=n;i++){
    for(int j=i+1;j<=n;j++){
      for(int k=j+1;k<=n;k++){
        if(check(i,j,k)){
          int wid=width(i,j,k);
          ans=max(ans,wid);
        }
      }    
    }
  }
  printf("%d",ans);
  return 0;
}