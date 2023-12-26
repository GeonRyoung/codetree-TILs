#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

class people{
  public:
    string name;string adress;string region;
    people(string name=" ",string adress=" ",string region=" "){
      this->name=name;
      this->adress=adress;
      this->region=region;
    }
};

int main(){
  people p[10];
  int n;
  (void)scanf("%d",&n);
  for(int i=0;i<n;i++){
    string name;string adress;string region;
    cin >> name >>adress >> region;
    p[i]=people(name,adress,region);
  }
  int lastname=0;
  for(int i=0;i<n;i++){
    if(p[lastname].name<p[i].name)
      lastname=i;
  }
  cout << "name " <<p[lastname].name << endl;
  cout << "addr " <<p[lastname].adress << endl;
  cout << "city "<< p[lastname].region;
}