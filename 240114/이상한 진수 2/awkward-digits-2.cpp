#include <stdio.h>
#include <iostream>
#include <climits>

using namespace std;

int main(){
  string arr;
  cin >> arr;
  int ans=INT_MIN;
  for(int i=0;i<(int)arr.size();i++){
    arr[i]=arr[i]^1;
    int num=0;
    for(int j=0;j<(int)arr.size();j++){
      num=num*2+(arr[j]-'0');
    }
    ans=max(ans,num);
    arr[i]=arr[i]^1;
  }
  cout <<ans;
}