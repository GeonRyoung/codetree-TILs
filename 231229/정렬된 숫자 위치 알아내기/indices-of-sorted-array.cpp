#include <stdio.h>
#include <iostream>
#include <algorithm>

using namespace std;

class ARR{
  public:
    int number;int index;
    ARR(int number,int index){
      this->number=number;
      this->index=index;
    }
    ARR(){}
};

bool cmp(ARR a,ARR b){
  if(a.number!=b.number){
    return a.number<b.number;
  }
  return a.index<b.index;
}

ARR INPUT[1000];
  
int main(){
  int n;
  int answer[1000];
  (void)scanf("%d",&n);
  for(int i=0;i<n;i++){
    int number;
    (void)scanf("%d",&number);
    INPUT[i]=ARR(number,i);
  }
  sort(INPUT,INPUT+n,cmp);
  for(int i=0;i<n;i++){
    answer[INPUT[i].index]=i+1;
  }
  for(int i=0;i<n;i++){
    cout << answer[i] << " ";
  }
}