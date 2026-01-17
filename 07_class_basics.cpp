#include <iostream>
#include <string>

// Quest 07: 类的初体验 (Class Basics)
// 难度：Hardcore (无代码提示)
// 目标：Ch 7.1 Defining Abstract Data Types

// 任务需求：
// 1. 定义一个 `Student` 类。
// 2. 成员变量 (Member Variables):
//    - `name` (string)
//    - `score` (int)
// 3. 成员函数 (Member Functions):
//    - `print_info()`: 打印 "Student: [name], Score: [score]"。
//    - `set_data(string n, int s)`: 用于给成员变量赋值 (模拟 setter)。
// 4. 在 main 函数中：
//    - 实例化一个对象 `s1`。
//    - 调用 `set_data` 给它赋值 "Alice", 95。
//    - 调用 `print_info` 显示信息。
//    - (选做) 实例化第二个对象 `s2`，直接通过 `s2.name = "Bob"` 赋值 (验证
//    public 权限)。

class Student
{
  
  public:
  void print_info();
  void set_data(std::string n,int s);
  private:
  std::string name;
  int score;

};
void Student::print_info()
{
    std::cout<<"Student: "<<name<<", Score:"<<score<<std::endl;
};
void Student::set_data(std::string n,int s)
{
    name=n,score=s;
}
int main() {
  // 请开始你的表演
  Student s1;
  s1.set_data("zhansan",65);
  s1.print_info();
  return 0;
}
