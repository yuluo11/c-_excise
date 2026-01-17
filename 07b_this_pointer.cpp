#include <iostream>
#include <string>

// Quest 07-B: this 指针与作用域 (The 'this' Pointer)
// 难度：Hardcore
// 目标：Ch 7.1.2 Defining Member Functions

// 核心知识：
// 1. 只有【成员函数】里才有 `this` 指针。
// 2. `this` 指向调用该函数的那个对象地址。
// 3. 当参数名和成员变量名撞车（同名）时，必须用 `this->xxx` 来区分。

// 任务需求：
// 1. 定义 `Student` 类，包含 `name` (string) 和 `score` (int)。
// 2. 编写 `set_data` 函数：
//    - 参数必须叫 `name` 和 `score` (故意制造命名冲突)。
//    - 在函数内部，使用 `this` 指针来将参数赋值给成员变量。
//      (例如: `this->name = name;`)
// 3. 编写 `print_addr` 函数：
//    - 打印 `this` 的值 (即当前对象的地址)。
// 4. 在 main 中实例化对象 `s1`，打印 `&s1`，验证它和 `s1.print_addr()`
// 打印的地址是否一样。
class Student;

class Student
{
  public:
  void set_data(std::string name,int score){
    this->name=name,this->score=score;
  };
  void print_addr()
  {
      std::cout<<"Student: "<<this->name<<" ,Score:"<<this->score<<std::endl;
  };
  private:
  std::string name;
  int score;
};

int main() {
  // 请开始你的表演
  Student s1;
  s1.set_data("zhangsan",65);
  s1.print_addr();
  return 0;
}
