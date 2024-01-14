#include <stdio.h>
#include <iostream>
#include <climits>

using namespace std;

char arr[16][16];

int main(){
  int r,c;
  (void)scanf("%d %d",&r,&c);
  for(int i=1;i<=r;i++){
    for(int j=1;j<=c;j++){
      (void)scanf("%c",&arr[i][j]);
    }
  }
  int cnt=0;
  for(int i=2;i<=r;i++){
    for(int j=2;j<c;j++){
      for(int k=i+1;k<=r-1;k++){
        for(int l=j+1;l<=c-1;l++){
          if(arr[1][1]!=arr[i][j]&&arr[i][j]!=arr[k][l]&&arr[k][l]!=arr[r][c])
            cnt++;
        }
      }
    }
  }
  printf("%d",cnt);
}