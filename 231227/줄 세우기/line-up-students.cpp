#include <stdio.h>
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class Student{
  public:
   int height;int weight;int number;
    Student(int height=0,int weight=0,int number=0){
      this->height=height;
      this->weight=weight;
      this->number=number;
    }
};

bool cmp(Student a,Student b){
  if(a.height==b.height){
    if(a.weight==b.weight)
      return a.number < b.number;
    return a.weight >b.weight;
  }
  return a.height > b.height;
}

int main(){
  Student p[1000];
  int n;int number=1;
  (void)scanf("%d",&n);
  for(int i=0;i<n;i++){
    int height;int weight;
    (void)scanf("%d %d",&height,&weight);
    p[i]=Student(height,weight,number);
    number++;
  }
  sort(p,p+n,cmp);
  for(int i=0;i<n;i++){
    cout << p[i].height << " " << p[i].weight << " " << p[i].number <<endl;
  }
  return 0;
}