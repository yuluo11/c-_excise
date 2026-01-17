#include <iostream>
#include <stdexcept>
#include <string>

// Quest 5.6: 异常处理 (Solution)
// 正确答案：由函数抛出，由 main 捕获。

double divide(double a, double b) {
  if (b == 0) {
    throw std::runtime_error("Division by zero!");
  }
  return a / b;
}

int main() {
  double x, y;
  std::cout << "请输入两个数字: " << std::endl;
  while (std::cin >> x >> y) {
    try {
      std::cout << "Result: " << divide(x, y) << std::endl;
    } catch (const std::exception &e) {
      std::cout << "Error: " << e.what() << std::endl;
    }
  }
  return 0;
}