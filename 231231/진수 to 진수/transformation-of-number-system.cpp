#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

int main(){
  int a,b;
  string n;
  int arr[100];
  (void)scanf("%d %d",&a,&b);
  cin >> n;
  int cnt=0;
  int num=0;
  for(int i=0;i<(int)n.size();i++){
    num=num*a+(n[i]-'0');
  }
  while(true){
    if(num<b){
      arr[cnt++]=num;
      break;
    }
    arr[cnt++]=num%b;
    num/=b;
  }
  for(int i=cnt-1;i>=0;i--){
    cout << arr[i];
  }
}