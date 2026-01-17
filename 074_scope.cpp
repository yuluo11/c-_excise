#include <iostream>
#include <string>

// Quest 7.4: 名字查找狩猎 (Scope Hunter)
// 难度：Hardcore (陷阱题)
// 目标：Ch 7.4 Class Scope

// 背景：
// 当类里面的变量、参数、全局变量全都叫同一个名字时，C++ 编译器会晕吗？
// 不会，它有一套严格的查找顺序：
// 1. 当前块 (成员函数内部)
// 2. 类作用域 (类成员)
// 3. 全局作用域 / 外层作用域

// 任务需求：
// 1. 定义一个全局变量 `int height = 100;`。
// 2. 定义 `Display` 类：
//    - 成员变量：`int height = 50;`
//    - 成员函数：`void silly_function(int height)` (注意参数也叫 height！)
// 3. 在 `silly_function` 内部，只用 `std::cout` 打印：
//    - 打印参数 height。
//    - 打印成员变量 height (使用名为 `this` 的显式方法)。
//    - 打印成员变量 height (不使用 `this`，使用类名作用域符 `::` )。
//    - 打印全局变量 height (使用全局作用域符 `::` )。
// 4. 在 main 中调用它，传入参数 10。
//    - 预期输出应该分别是：10, 50, 50, 100。

int height; // Global

int main() {
  // 请开始你的表演

  return 0;
}
