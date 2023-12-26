#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

class product{
  public:
    string n;int c;
    product(string name,int code){
      this->n=name;
      this->c=code;
    }
};

int main(){
  product p1("codetree",50);
  string n2;int c2;
  cin >> n2 >> c2;
  product p2(n2,c2);
  cout << "product " <<p1.c<<" "<<"is "<<p1.n<<endl;
  cout << "product " <<p2.c<<" "<<"is "<<p2.n;
}