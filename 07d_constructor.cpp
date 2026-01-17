#include <iostream>
#include <string>

// Quest 07-D: 构造函数觉醒 (Constructors 101)
// 难度：Hardcore
// 目标：Ch 7.1.4 Constructors

// 背景：
// 每次都要手动调用 set_data 太麻烦了。
// 我们希望对象创建的那一刻，数据就已经准备好了。
// 这就是构造函数 (Constructor) 的使命。

// 任务需求：
// 1. 定义 Student 类 (name, score)。
// 2. 定义【默认构造函数】(Default Constructor)：
//    - 无参数。
//    - 将 name 初始化为 "Unknown", score 初始化为 0。
// 3. 定义【参数化构造函数】(Parameterized Constructor)：
//    - 接受 string n, int s。
//    - 将 name 初始化为 n, score 初始化为 s。
//    - 【关键要求】：请尝试使用 "构造函数初始值列表" (Constructor Initializer
//    List) 的写法。
//      (语法: `Student(string n, int s) : name(n), score(s) { }`)
// 4. 定义 `print_info`。
// 5. 在 main 中：
//    - `Student s1;` (调用默认构造) -> 打印应该显示 Unknown, 0
//    - `Student s2("Mike", 99);` (调用带参构造) -> 打印应该显示 Mike, 99
class Student;

class Student
{
  public:
  Student()=default;
  Student(std::string n,int s):name(n),score(s){}
  void print_info()const{
    std::cout<<"Student: "<<name<<", Score:"<<score<<std::endl;
  }
  private:
  std::string name;
  int score;
};
int main() {
  // 请开始你的表演
  Student s1;
  s1.print_info();
  Student s2("zhangsan",65);
  s2.print_info();
  return 0;
}
