#include <stdio.h>
#include <iostream>
#include <climits>
#include <string>

using namespace std;

int main(){
  string A;
  cin >> A;
  int ans=0;
  int cnt=1;
  for(int i=0;i<(int)A.size();i++){
    for(int j=cnt++;j<(int)A.size();j++){
      if(A[i]=='('&&A[j]==')')
        ans++;
    }
  }
  printf("%d",ans);  
}