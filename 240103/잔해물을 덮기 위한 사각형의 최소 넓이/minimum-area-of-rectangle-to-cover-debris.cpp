#include <stdio.h>
#include <algorithm>

using namespace std;

#define OFFSET 1000


int arr[2002][2002];
int sum;
int main(){
  int xmax=0,ymax=0;
  int xmin=2000;int ymin=2000;
  for(int i=0;i<2;i++){
    int x1,y1,x2,y2;
    (void)scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
    x1+=OFFSET;y1+=OFFSET;x2+=OFFSET;y2+=OFFSET;
    for(int j=x1;j<=x2;j++){
      for(int k=y1;k<=y2;k++){
        if(i==0)
          arr[j][k]=1;
        else
          arr[j][k]=0;
      }
    }
  }
  for(int i=0;i<=2001;i++){
    for(int j=0;j<=2001;j++){
      if(arr[i][j]!=0){
        xmax=max(xmax,i);
        xmin=min(xmin,i);
        ymax=max(ymax,j);
        ymin=min(ymin,j);
      }
    }
  }
  printf("%d",(xmax-xmin)*(ymax-ymin));
}