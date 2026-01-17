#include <iostream>
#include <string>
#include <vector>

// 练习目标：
// 1. 巩固 vector 的基本操作
// 2. 重点练习：多重条件判断 (if - else if - else)
// 3. 练习：如何把数字映射成字符串 ( 90 -> "A" )

int main() {
  std::cout << "请输入学生成绩 (0-100)，输入 -1 结束: " << std::endl;

  std::vector<int> scores;
  int input;

  // TODO 1: 编写读取循环 (这已经是肌肉记忆了吧？)
  // while...
  while(std::cin>>input)
  {
    if(input==-1)
        break;
    scores.push_back(input);
  }

  if (scores.empty()) {
    std::cout << "没有输入成绩。" << std::endl;
    return 0;
  }

  std::cout << "----------------------" << std::endl;
  std::cout << "成绩转换报告:" << std::endl;

  for(int s:scores)
  {
    std::string grade;
    if(s==100)
        grade="S";
    if(s>=90&&s<100)
        grade="A";
    if(s>=80&&s<90)
        grade="B";
    if(s>=70&&s<80)
        grade="C";
    if(s>=60&&s<70)
        grade="D";
    if(s<60&&s>=0)
        grade="F";
    if(s<0||s>100)
        grade="error";
    std::cout << "Score: " << s << " -> Level: " << grade << std::endl;
}
  
  return 0;
}
