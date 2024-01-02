#include <stdio.h>

#define Max_N 1000
#define Max_R 200000

int n;
int x1[Max_R+1],x2[Max_R+1];

char last[Max_R+1];

int main(){
  (void)scanf("%d",&n);
  int cur=100000;int b=0;int w=0;
  for(int i=0;i<n;i++){
    int distance;
    char direction;
    (void)scanf("%d %c",&distance,&direction);
    if(direction=='L'){
      x2[i]=cur;
      cur=cur-distance+1;
      x1[i]=cur;
      for(int j=x1[i];j<=x2[i];j++){
        last[j]='W';}
  }
    else if(direction=='R'){
      x1[i]=cur;
      cur=cur+distance-1;
      x2[i]=cur;
      for(int j=x1[i];j<=x2[i];j++){
        last[j]='B';}
    }
  }
  for(int i=0;i<=Max_R;i++){
    if(last[i]=='B')
      b++;
    else if(last[i]=='W')
      w++;
  }
  printf("%d %d",w,b);
}