#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

class Secret{
  public:
    string secretcode;
    char meetingpoint;
    int time;
    Secret(string secretcode,char meetingpoint,int time){
      this->secretcode = secretcode;
      this->meetingpoint = meetingpoint;
      this->time = time;
    }
};

int main(){
  string s_code;
  char m_point;
  int time;
  cin >> s_code;
  cin >> m_point;;
  cin >> time;
  Secret s(s_code,m_point,time);
  cout << "secret code : "<<s.secretcode <<endl;
  cout << "meeting point : "<<s.meetingpoint <<endl;
  cout << "time : "<<s.time <<endl;
  return 0;
}