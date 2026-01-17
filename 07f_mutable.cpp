#include <iostream>
#include <string>

// Quest 07-F: 唯一的叛徒 - Mutable (Section 7.3.1)
// 难度：Hardcore
// 目标：理解 mutable 关键字的作用

// 背景：
// 我们知道 const 成员函数不能修改任何成员变量。
// 但有时候，我们想统计一个“只读函数”被调用的次数。
// 这个计数器虽然是对象的一部分，但它不影响对象的“逻辑状态”，所以我们希望即使在
// list (const) 这种函数里也能修改它。 这就是 `mutable` 的用武之地。

// 任务需求：
// 1. 定义一个 `Screen` 类。
// 2. 成员变量：
//    - `string contents` (屏幕内容)。
//    - `mutable int access_ctr` (访问计数器) -> 注意加上 mutable！
// 3. 成员函数：
//    - `void some_member() const`。
//    - 在函数内部，让 `access_ctr` 自增 (++access_ctr)。
// 4. 在 main 中：
//    - 创建 `const Screen s;` (注意是 const 对象)。
//    - 调用 `s.some_member()`。
//    - 验证：如果没有 mutable，编译器会禁止 const 函数修改变量；有了 mutable
//    就可以畅行无阻。
class Screen;

class Screen
{
  public:
  Screen()=default;
  void some_menber()const{
    ++access_ctr;
  }
  void check()const{
    std::cout<<access_ctr<<std::endl;
  }
  private:
  std::string contents;
  mutable int access_ctr=0;

};
int main() {
  // 请开始你的表演
  const Screen s;
  s.check();
  s.some_menber();
  s.check();
  return 0;
}
