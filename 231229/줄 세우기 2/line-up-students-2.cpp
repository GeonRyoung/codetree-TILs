#include <stdio.h>
#include <iostream>
#include <algorithm>

using namespace std;

class student{
  public:
    int height;int weight;int number;
    student(int h,int w,int number){
      this->height=h;
      this->weight=w;
      this->number=number;
    }
    student(){}
};

student p[1000];

bool cmp(student a,student b){
  if(a.height==b.height)
    return a.weight > b.weight;
  return a.height < b.height;
}

int main(){
  int n;
  (void)scanf("%d",&n);
  int number=1;
  for(int i=0;i<n;i++){
    int a,b;
    (void)scanf("%d %d",&a,&b);
    p[i]=student(a,b,number);
    number++;
  }
  sort(p,p+n,cmp);
  for(int i=0;i<n;i++){
    printf("%d %d %d\n",p[i].height,p[i].weight,p[i].number);
  }
  return 0;
}