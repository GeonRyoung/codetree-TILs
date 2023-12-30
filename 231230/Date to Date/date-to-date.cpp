#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
  int m1,d1,m2,d2;
  (void)scanf("%d %d %d %d",&m1,&d1,&m2,&d2);
  int months[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
  int f_total=d1;
  int a_total=d2;
  for(int i=1;i<m1;i++){
    f_total+=months[i];
  }
  for(int i=1;i<m2;i++){
    a_total+=months[i];
  }
  printf("%d",a_total-f_total+1);
  return 0;
}