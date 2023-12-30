#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
  int m1,d1,m2,d2;
  (void)scanf("%d %d %d %d",&m1,&d1,&m2,&d2);
  int months[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
  int a=months[m1]+d1;
  int total=d2;
  for(int i=m1;i<=m2;i++){
    total+=months[i];
  }
  if(m1==m2&&d1==d2){
    total=1;
    printf("%d",total);}
  else
    printf("%d",total-a);
}