#include <iostream>
#include <string>

// 练习目标：
// 1. 掌握 std::cin 和 std::cout 的基本使用
// 2. 练习 while 循环和 if 判断
// 3. (进阶) 如果读到了 C++ Primer 的 vector，尝试用 std::vector 存储

int main() {
  // 任务描述：
  // 编写一个程序，持续接收用户输入的学生成绩（0-100的整数）。
  // 当用户输入 -1 时，停止输入并并在屏幕上打印出：
  // 1. 输入了多少个成绩 (Count)
  // 2. 总分是多少 (Sum)
  // 3. 平均分是多少 (Average)

  // 提示：你需要定义变量来追踪总和(sum)和数量(count)

  std::cout << "请输入学生成绩 (输入 -1 结束): " << std::endl;

  int score;
  // TODO: 在下方编写你的代码
  // 参考思路：
  // while (std::cin >> score) {
  //    if (score == -1) ...
  // }

  return 0;
}
