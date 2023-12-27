#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <string>

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
  return a.height < b.height;
}

int main(){
  person p[10];
  int n;
  (void)scanf("%d",&n);
  for(int i=0;i<n;i++){
    string a;int b,c;
    cin >> a >> b >> c;
    p[i]=person(a,b,c);
  }
  sort(p,p+n,cmp);
  for(int i=0;i<n;i++){
    cout << p[i].name << " " << p[i].height << " " << p[i].weight << endl;
  }
}