#include <stdio.h>

#define Max_N 1000
#define Max_R 200000
#define OFFSET 100000

int n;
int x1[Max_N],x2[Max_N];

char last[Max_R+1];
int checked[Max_R+1];

int main(){
  (void)scanf("%d",&n);
  int cur=0;int b=0;int w=0;int g=0;
  for(int i=0;i<n;i++){
    int distance;
    char direction;
    (void)scanf("%d %c",&distance,&direction);
    if(direction=='L'){
      x1[i]=cur-distance;
      x2[i]=cur;
      cur-=distance;
      x1[i]+=OFFSET;
      x2[i]+=OFFSET;
      for(int j=x1[i];j<x2[i];j++)
        last[j]='W';
  }
    else{
      x1[i]=cur;
      x2[i]=cur+distance;
      cur+=distance;
      x1[i]+=OFFSET;
      x2[i]+=OFFSET;
      for(int j=x1[i];j<x2[i];j++)
        last[j]='B';
    }
  }
  for(int i=0;i<n;i++){
    for(int j=x1[i];j<x2[i];j++){
      checked[j]++;
    }
  }
  for(int i=0;i<=Max_R;i++){
    if(checked[i]>=4){
      g++;
      last[i]='0';
    }
    else if(last[i]=='B')
      b++;
    else if(last[i]=='W')
      w++;
  }
  printf("%d %d %d",w,b,g);
}