#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

class ans{
  public:
    string code;char color;int second;
    ans(string code=" ",char color=' ',int second=0){
      this->code=code;
      this->color=color;
      this->second=second;
    }
};

int main(){
  string code;char color;int second;
  cin >> code >> color >> second;
  ans ans(code,color,second);
  cout << "code : " <<ans.code<<endl;
  cout << "color : "<<ans.color<<endl;
  cout << "second : "<<ans.second;
}