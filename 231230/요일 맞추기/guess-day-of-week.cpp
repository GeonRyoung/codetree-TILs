#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

bool safe(int m1,int d1,int m2,int d2){
  if(m1>m2||(m1==m2&&d1>d2))
    return false;
  return true;
}

int main(){
  int m1,d1;
  int m2,d2;
  (void)scanf("%d %d  %d %d",&m1,&d1,&m2,&d2);
  string str[8]={"0","Mon","Tue","Wed","Thu","Fri","Sat","Sun"};
  int months[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
  int day=1;
  int month=m1;
  while(1){
    if(safe(m1,d1,m2,d2)){
      if(m1==m2&&d1==d2){
        break;
      }
      d1++;
      day++;
      if(d1>months[month]){
        d1=1;
        m1++;
        month++;
      }
      if(day>7)
        day=1;
    }
    else{
      if(m1==m2&&d1==d2){
        break;
      }
      d1--;
      day--;
      if(d1==0){
        d1=months[month-1];
        m1--;
        month--;
      }
      if(day<1)
        day=7;
    }
  }
  cout << str[day];
}