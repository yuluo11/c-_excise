#include <cctype> // toupper 需要这个头文件
#include <iostream>
#include <string>
#include <vector>

// 练习目标：
// 1. 掌握迭代器 (Iterator) 的基本写法: begin(), end()
// 2. 掌握解引用运算符 (*) : 获取迭代器指向的值
// 3. 掌握迭代器的移动 (++): 移动到下一个元素

// 任务：
// 编写一个程序，读取用户输入的字符串。
// 使用【迭代器】(而不是下标 []) 遍历这个字符串。
// 将字符串中的每个字符都转换为大写 (toupper)。
// 最后打印结果。

int main() {
  std::string s;
  std::cout << "请输入一个单词: " << std::endl;

  if (std::cin >> s) {
    for(auto it=s.begin();it!=s.end();++it)
    {
          *it=toupper(*it);
    }
    // TODO: 使用迭代器遍历 s 并修改字符
    // 提示类型：std::string::iterator 或者直接用 auto
    // for (auto it = ...; it != ...; ++it) {
    //     *it = std::toupper(*it);
    // }
  }

  std::cout << "转换后: " << s << std::endl;
  return 0;
}
