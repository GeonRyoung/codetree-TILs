#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

int main(){
  int m1,d1;
  int m2,d2;
  string s;
  (void)scanf("%d %d  %d %d",&m1,&d1,&m2,&d2);
  cin >> s;
  string str[8]={"0","Mon","Tue","Wed","Thu","Fri","Sat","Sun"};
  int months[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};
  int day=1;
  int month=m1;
  int ans=0;
  while(1){
    if(str[day]==s)
      ans++;
    d1++;
    day++;
    if(d1>months[month]){
      d1=1;
      m1++;
      month++;
    }
    if(day>7)
      day=1;
    if(m1==m2&&d1==d2){
      break;}
  }
  if(str[day]==s)
      ans++;
  cout << ans;
}