#include <stdio.h>
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class person{
  public:
    string name;int height;int weight;
    person(string name=" ",int height=0,int weight=0){
      this->name=name;
      this->height=height;
      this->weight=weight;
    }
};

bool cmp(person a,person b){
  if(a.height==b.height){
    return a.weight > b.weight;
  }
  return a.height <b.height;
}
int main(){
  person p[10];
  int n;
  (void)scanf("%d",&n);
  for(int i=0;i<n;i++){
    string name;int height;int weight;
    cin >> name >> height >> weight;
    p[i]=person(name,height,weight);
  }
  sort(p,p+n,cmp);
  for(int i=0;i<n;i++){
    cout << p[i].name << " " << p[i].height << " " << p[i].weight << endl;
  }
}