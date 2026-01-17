#include <iostream>
#include <string>
#include <vector>

// Quest 07-Screen: 屏幕类的终极形态 (The Full Screen Class)
// 难度：BOSS FIGHT
// 目标：整合 Ch 7.1 - 7.3 所有知识点

// 任务需求：严格实现 C++ Primer 书中的 Screen 类
//
// 1. 类型别名 (Type Member):
//    - 在 public 定义 `using pos = std::string::size_type;`
//
// 2. 成员变量 (Private):
//    - `pos cursor = 0;` (光标)
//    - `pos height = 0, width = 0;` (高宽)
//    - `std::string contents;` (内容)
//
// 3. 构造函数:
//    - `Screen() = default;`
//    - `Screen(pos ht, pos wd, char c)`: 初始化高、宽，并将 `contents` 初始化为
//    `ht * wd` 个字符 `c`。
//      (举例: Screen(2, 3, 'X') -> contents 是 "XXXXXX")
//
// 4. 成员函数 (支持链式调用):
//    - `move(pos r, pos c)`: 移动光标到 (r行, c列)。注意计算公式：`row * width
//    + col`。
//    - `set(char c)`: 修改当前光标处的字符。
//    - `set(pos r, pos col, char ch)`: 修改指定位置的字符 (重载版本)。
//
// 5. 显示函数 (Display Overloading):
//    - `display(std::ostream &os)`: 打印 contents。
//      (难点：需要同时提供 `const` 版本和 `非const` 版本，都返回 `*this`)
//      (提示：书中使用了一个 private 的 `do_display` 函数来避免代码重复)
//
// 6. Main 测试:
//    - 创建一个 5x5 的屏幕，用 'X' 填充。
//    - 移动到 (2, 2) 设为 'O'。
//    - 打印。
//    - 验证 const 对象能不能打印。
class Screen;

class Screen
{
  public:
  typedef std::string::size_type pos ;
  Screen()=default;
  Screen(pos ht,pos wd,char c):height(ht),width(wd),contents(ht*wd,c){}
  Screen &move(pos r,pos c);
  Screen &set(char );
  Screen &set(pos ,pos ,char );
  char get() const { return contents[cursor]; }
  inline char get(pos r,pos c)const;
  Screen &display(std::ostream&os){do_display(os);return *this;}
  const Screen &display(std::ostream &os)const{do_display(os);return *this;}
  void do_display(std::ostream &os)const
  {
    for (pos i = 0; i < contents.size(); ++i)
    {
        os << contents[i]; // 打印字符
        // 如果到达行尾 (也是就索引+1 能被 width 整除)，就换行
        if ((i + 1) % width == 0)
        {
            os << '\n';
        }
    }
  }
  
  private:
  pos cursor=0;
  pos height=0,width=0;
  std::string contents;
};

inline
Screen &Screen::move(pos r,pos c)
{
    pos row=r*width;
    cursor=row+c;
    return *this;
}
char Screen::get(pos r,pos c)const
{
   pos row=r*width;
   return contents[row+c];
}
inline
Screen &Screen::set(char c)
{
    contents[cursor]=c;
    return *this;
}
inline
Screen &Screen::set(pos r,pos col,char ch)
{
    contents[r*width+col]=ch;
    return *this;
}
int main() {
  // 请开始你的表演
  Screen s1={5,5,'X'};
  s1.move(2,2).set('0').display(std::cout);
  return 0;
}
