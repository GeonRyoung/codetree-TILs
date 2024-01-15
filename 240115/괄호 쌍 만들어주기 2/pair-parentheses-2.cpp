#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

int main(){
  int ans=0;
  string str;
  cin >> str;
  for(int i=0;i<(int)str.size()-1;i++){
    for(int j=i+1;j<(int)str.size()-1;j++){
      if(str[i]=='('&&str[i+1]=='('&&str[j]==')'&&str[j+1]==')')
        ans++;
    }
  }
  printf("%d",ans);
}