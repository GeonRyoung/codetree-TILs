#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

class data{
  public:
    string day;string week;string weather;
    data(string day=" ",string week=" ",string weather=" "){
      this->day=day;
      this->week=week;
      this->weather=weather;
    }
};

int main(){
  data y[100];
  data x[100];
  int n;
  (void)scanf("%d",&n);
  for(int i=0;i<n;i++){
    string day;string week;string weather;
    cin >> day >> week >> weather;
    y[i]=data(day,week,weather);
  }
  int number=0;
  for(int i=0;i<n;i++){
    if(y[i].weather=="Rain"){
      x[number].day=y[i].day;
      x[number].week=y[i].week;
      x[number].weather=y[i].weather;
      number++;
    }
  }
  int last=0;
  for(int i=0;i<number;i++){
    if(x[last].day>x[i].day)
      last=i;
  }
  cout << x[last].day << " " << x[last].week << " " << x[last].weather;
}