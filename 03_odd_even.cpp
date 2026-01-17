#include <iostream>
#include <vector>

// 练习目标：
// 1. 练习取模运算 (%) 判断奇偶
// 2. 练习操作多个 vector (odds, evens)

int main() {
  std::cout << "请输入一组整数 (-1 结束): " << std::endl;
  int input;
  std::vector<int>cnt;
  std::vector<int>evens;
  std::vector<int>odds;
  while(std::cin>>input)
  {
    if(input==-1)
        break;
    cnt.push_back(input);
  }
  for(int c:cnt)
  {
    if(c%2==0)
    evens.push_back(c);
    else
    odds.push_back(c);
  }
  for(int e:evens)
  {
    std::cout<<e<<std::endl;
  }
  for(int o:odds)
  {
    std::cout<<o<<std::endl;
  }
  // TODO: 你的代码
  // 任务：
  // 1. 读取输入
  // 2. 把偶数存入 evens vector
  // 3. 把奇数存入 odds vector
  // 4. 分别打印两个 vector 的内容
  return 0;
}
