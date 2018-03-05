#include<cstdio>
#include<string.h>
#include<vector>
#include<algorithm>

using namespace std;

struct student
{
  int num;
  int s;     //sum
  int score1;//morality
  int score2;//ability
};

bool rule(const student &s1, const student &s2)
{
  if (s1.s < s2.s){
    return false;
  }
  else if (s1.s>s2.s){
    return true;
  }
  else{
    if (s1.score1 < s2.score1){
      return false;
    }
    else if (s1.score1>s2.score1){
      return true;
    }
    else{
      if (s1.num < s2.num){
        return true;
      }
      else{
        return false;
      }
    }
  }
}

int main(){
  vector<student> vec1; //student of type1
  vector<student> vec2; //student of type2
  vector<student> vec3; //student of type3
  vector<student> vec4; //student of type4
  student t;
  int n, l, h;

  //input
  scanf("%d %d %d", &n, &l, &h);
  for (int i = 0; i < n; i++){
    scanf("%d %d %d", &t.num, &t.score1, &t.score2);
    if (t.score1 >= l&&t.score2 >= l){
      if (t.score1 >= h&&t.score2 >= h){
        t.s = t.score1 + t.score2;
        vec1.push_back(t);
      }
      else if (t.score1 >= h){
        t.s = t.score1 + t.score2;
        vec2.push_back(t);
      }
      else if (t.score1 >= t.score2){
        t.s = t.score1 + t.score2;
        vec3.push_back(t);
      }
      else{
        t.s = t.score1 + t.score2;
        vec4.push_back(t);
      }
    }
  }

  //sort
  sort(vec1.begin(), vec1.end(), rule);
  sort(vec2.begin(), vec2.end(), rule);
  sort(vec3.begin(), vec3.end(), rule);
  sort(vec4.begin(), vec4.end(), rule);
  //

  //output
  printf("%d\n", vec1.size() + vec2.size() + vec3.size() + vec4.size());
  for (int i = 0; i<vec1.size(); i++){
    printf("%d %d %d\n", vec1[i].num, vec1[i].score1, vec1[i].score2);
  }
  for (int i = 0; i<vec2.size(); i++){
    printf("%d %d %d\n", vec2[i].num, vec2[i].score1, vec2[i].score2);
  }
  for (int i = 0; i<vec3.size(); i++){
    printf("%d %d %d\n", vec3[i].num, vec3[i].score1, vec3[i].score2);
  }
  for (int i = 0; i<vec4.size(); i++){
    printf("%d %d %d\n", vec4[i].num, vec4[i].score1, vec4[i].score2);
  }
  //
  return 0;
}
