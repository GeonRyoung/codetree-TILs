#include <stdio.h>
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class subject{
  public:
    string name;int kor;int eng;int math;
    subject(string name=" ",int kor=0,int eng=0,int math= 0){
      this->name=name;
      this->kor=kor;
      this->eng=eng;
      this->math=math;
    }
};

bool cmp(subject a,subject b){
  return a.kor+a.eng+a.math < b.kor+b.eng+b.math;
}

int main(){
  subject p[10];
  int n;
  (void)scanf("%d",&n);
  for(int i=0;i<n;i++){
    string a;int b,c,d;
    cin >> a >> b >> c >> d;
    p[i]=subject(a,b,c,d);
  }
  sort(p,p+n,cmp);
  for(int i=0;i<n;i++){
    cout << p[i].name << " " << p[i].kor << " " << p[i].eng << " "<< p[i].math << endl;
  }
  return 0;
}