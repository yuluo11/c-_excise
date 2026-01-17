#include <iostream>
#include <string>

// Quest 07-F2: 连招系统 - Method Chaining (Section 7.3.2)
// 难度：Hardcore
// 目标：理解返回 *this 的引用

// 背景：
// 我们希望像这样操作屏幕：
// myScreen.move(4,0).set('#').display(cout);
// 这种“连招”操作要求每个函数执行完后，必须把“我自己”交还给调用者。

// 任务需求：
// 1. 定义 Screen 类。
// 2. 成员变量：`string contents` (简单起见，暂用 string 模拟屏幕，默认值 " "
// 10个空格)。
//    `int cursor = 0;` (光标位置)。
// 3. 成员函数 (注意返回值！)：
//    - `Screen& move(int pos)`: 将 cursor 移动到 pos 位置，并返回 *this。
//    - `Screen& set(char c)`: 将当前 cursor 位置的字符修改为 c，并返回 *this。
//    - `Screen& display()`: 打印 contents，并返回 *this。
// 4. 在 main 中：
//    - `Screen myScreen;`
//    - 一行代码完成：移动到位置3 -> 设为 'X' -> 移动到位置5 -> 设为 'Y' ->
//    显示。
//    - (预期输出: "   X Y    ")
class Screen;

class Screen
{
    public:
    Screen &move(int pos){
      cursor=pos;
      return *this;
    }
    Screen &set(char c){
      contents[cursor]=c;
      return *this;
    }
    Screen &display(){
      std::cout<<contents;
      return *this;
    }
    private:
    std::string contents{std::string(10,' ')};
    int cursor=0;
};
int main() {
  // 请开始你的表演
  Screen my_screen;
  my_screen.move(3).set('a').display();
  my_screen.move(5).set('b').display();
  return 0;
}
