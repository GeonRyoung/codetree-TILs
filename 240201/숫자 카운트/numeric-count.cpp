#include <stdio.h>
#include <algorithm>
#include <climits>

using namespace std;
int n;
int number[11],strike[11],ball[11];

int main(){
  int cnt=0;
  (void)scanf("%d",&n);
  for(int i=1;i<=n;i++){
    (void)scanf("%d %d %d",&number[i],&strike[i],&ball[i]);
  }
  for(int i=1;i<=9;i++){
    for(int j=1;j<=9;j++){
      for(int k=1;k<=9;k++){
        bool safe=1;
        if(i==j||j==k||i==k) continue;
        for(int l=1;l<=n;l++){
          int cnt_1=0,cnt_2=0;
          int one=number[l]/100;
          int ten=(number[l]/10)%10;
          int hun=number[l]%10;
          if(one==i) cnt_1++;
          else if(one==j||one==k) cnt_2++;
          if(ten==j) cnt_1++;
          else if(ten==i||ten==k) cnt_2++;
          if(hun==k) cnt_1++;
          else if(hun==i||hun==j) cnt_2++;
          if(cnt_1!=strike[l]||cnt_2!=ball[l]){
            safe=0;
            break;
          }
        }
        if(safe==1)
        cnt++;
      }
    }
  }
  printf("%d",cnt);
  return 0;
}