#include <iostream>
#include <string>
#include <vector>

// Quest 6.4: 函数重载工厂 (Overloading Factory)
// 难度：Hardcore
// 目标：Ch 6.4 Overloaded Functions

// 背景：
// 在 C 语言中，函数名必须唯一。但在 C++
// 中，只要【参数列表】不同，函数名可以相同。 这叫“函数重载”。

// 任务需求：
// 编写三个名为 `print_data` 的函数，它们实现不同的打印逻辑：
// 1. `print_data(int i)`: 打印 "Integer: " 加上数字。
// 2. `print_data(double d)`: 打印 "Double: " 加上数字。
// 3. `print_data(std::string s)`: 打印 "String: " 加上字符串内容。
// 4. (选做) `print_data(std::vector<int> v)`: 遍历打印 "Vector: [1, 2, ...]"。
//
// 在 main 函数中分别调用它们，验证编译器是否能自动找到正确的那个函数。
void print_data(int i);
void print_data(double d);
void print_data(std::string s);
void print_data(std::vector<int> v);
int main() {
  // 请开始你的表演
  
  int x=10;
  double y=0.0;
  std::string z="hello";
  std::vector<int> h;
  for(int i=0;i<10;i++)
  {
      h.push_back(i);
  }
  print_data(x);
  print_data(y);
  print_data(z);
  print_data(h);
  return 0;
}
void print_data(int i)
{
    std::cout<<"Interger:"<<i<<std::endl;
}
void print_data(double d)
{
   std::cout<<"Double:"<<d<<std::endl;
}
void print_data(std::string s)
{ 
    std::cout<<"String:"<<s<<std::endl;
}
void print_data(std::vector<int> v)
{
    for(auto &vi:v)
    {
        std::cout<<"Vector:"<<vi<<" ";
    }
}