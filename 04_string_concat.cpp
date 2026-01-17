#include <iostream>
#include <string>
#include <vector>

// 练习目标：
// 1. 掌握 std::string 的基本操作 (拼接 +)
// 2. 练习读取包含空格的整行字符串 (std::getline)

int main() {
  std::cout << "请输入几行句子 (输入 quit 结束): " << std::endl;

  // TODO:
  // 1. 使用 std::getline(std::cin, line) 读取整行
  // 2. 如果读到 "quit" 就停止
  // 3. 将读取到的每一行拼接到一个大的 result 字符串中，每行之间加一个空格
  // 4. 最后打印在这个 result 字符串
  std::string s;
  std::vector<std::string> result;
  while(std::getline(std::cin,s))
  {
      if(s=="quit")
          break;
      s+=" ";
      result.push_back(s);
  }
  for(auto r:result)
  {
      std::cout<<r<<std::endl;
  }
  // 可以在这里开始写代码:

  return 0;
}
