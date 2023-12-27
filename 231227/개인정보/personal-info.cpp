#include <stdio.h>
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class person{
  public:
    string name;int height;double weight;
    person(string name=" ",int height=0,double weight=0){
      this->name=name;
      this->height=height;
      this->weight=weight;
    }
};

bool cmp_name(person a,person b){
  return a.name < b.name;
}

bool cmp_height(person a,person b){
  return a.height > b.height;
}
int main(){
  person p[5];
  for(int i=0;i<5;i++){
    cin >> p[i].name >> p[i].height >> p[i].weight;
  }
  sort(p,p+5,cmp_name);
  printf("name\n");
  for(int i=0;i<5;i++){
    cout << p[i].name << " " << p[i].height << " " << p[i].weight << endl;
  }
  sort(p,p+5,cmp_height);
  printf("\nheight\n");
  for(int i=0;i<5;i++){
    cout << p[i].name << " " << p[i].height << " " << p[i].weight << endl;
  }
  return 0;
}