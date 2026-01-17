#include <iostream>
#include <vector>

// 练习目标：
// 1. 真正掌握 std::vector 的存储 (push_back)
// 2. 练习如何遍历 vector (for 循环)
// 3. 练习基本的算法逻辑：找最大值和最小值

// 这里的挑战是：我们不使用 std::sort 或
// 章的内容。

int main() {
  std::cout << "请输入一组整数 (输入 -1 结束): " << std::endl;

  std::vector<int> numbers;
  int input;

  // TODO 1: 编写循环，读取输入并存入 numbers
  // 提示：和 Quest 01 一样
while(std::cin>>input)
  {
    if(input==-1)
        break;
    numbers.push_back(input);
  }
  // 如果没有输入数字，直接结束
  if (numbers.empty()) {
    std::cout << "未输入任何数字" << std::endl;
    return 0;
  }
  // 初始化最大值和最小值为数组的第一个元素
  // 思考：为什么不能初始化为 0？(如果输入的都是负数怎么办？)
  int max_val = numbers[0];
  int min_val = numbers[0];
  for(int num:numbers)
  {
    if(num>max_val)
        max_val=num;
    if(num<min_val)
        min_val=num;
  }
  // TODO 2: 遍历 numbers，更新 max_val 和 min_val
  // for (int i = 0; i < numbers.size(); ++i) {
  //     if (numbers[i] > max_val) { ... }
  //     if (numbers[i] < min_val) { ... }
  // }

  // 进阶 TODO: 也可以尝试用 range-based for 循环:
  // for (int num : numbers) { ... }

  std::cout << "最大值: " << max_val << std::endl;
  std::cout << "最小值: " << min_val << std::endl;
  std::cout << "总个数: " << numbers.size() << std::endl;

  return 0;
}
