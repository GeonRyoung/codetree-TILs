#include <stdio.h>
#include <iostream>
#include <string>
#include <climits>

using namespace std;

int main(){
  int n;
  (void)scanf("%d",&n);
  string str;
  cin >> str;
  int ans=0;
  for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
      for(int k=j+1;k<n;k++){
        if(str[i]=='C'&&str[j]=='O'&&str[k]=='W')
          ans++;
      }
    }
  }
  printf("%d",ans);
}