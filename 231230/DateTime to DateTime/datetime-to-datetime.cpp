#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
  int d1=11,h1=11,m1=11;
  int d2,h2,m2;
  int total_min=0;
  (void)scanf("%d %d %d",&d2,&h2,&m2);
  while(true){
    if(d1==d2 && h1==h2 && m1==m2)
      break;
    total_min++;
    m1++;
    if(m1==60){
      h1++;
      m1=0;
    }
    if(h1==24){
      d1++;
      h1=0;
    }
  }
  printf("%d",total_min);
}