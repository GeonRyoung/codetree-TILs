#include <stdio.h>
#include <iostream>

using namespace std;

bool safe(int d1,int h1,int m1,int d2,int h2,int m2){
  if(d1>d2||(d1==d2&&h1>h2)||(d1==d2&&h1==h2&&m1>m2))
    return true;
  return false;
}

int main(){
  int d1=11,h1=11,m1=11;
  int d2,h2,m2;
  int total_min=0;
  (void)scanf("%d %d %d",&d2,&h2,&m2);
  while(true){
    if(safe(d1,h1,m1,d2,h2,m2)){
      printf("-1");
      break;}
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
  if(safe(d1,h1,m1,d2,h2,m2)==0){
    printf("%d",total_min);
  }
}