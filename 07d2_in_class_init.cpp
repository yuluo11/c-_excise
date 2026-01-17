#include <iostream>
#include <string>

// Quest 07-D2: 类内初始值 (In-Class Initializers)
// 难度：Hardcore (无代码提示)
// 目标：Ch 7.1.4 Constructors - In-Class Initializers

// 背景：
// 在 Quest 07-D 中，Student() = default; 导致了 score 初始化为垃圾值。
// C++11 引入了 "In-Class Initializers"，允许我们在定义成员变量时直接给它赋值。
// 一旦这里有了值，= default 就会使用这个值，而不是置之不理。

// 任务需求：
// 1. 定义 Student 类 (name, score)。
// 2. 【关键】：在 private 区域定义成员变量时，直接赋予默认值。
//    - name = "Unknown"
//    - score = 0
// 3. 显式声明默认构造函数：`Student() = default;`
// 4. 定义带参构造函数 (使用初始值列表)：`Student(string n, int s) ...`
// 5. 在 main 中：
//    - `Student s1;` -> 验证 score 是否变成了 0 (而不是 -1121... ?)
//    - `Student s2("Tom", 90);` -> 验证带参构造是否依然有效
//    (它应该覆盖默认值)。
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
  std::string name="unknown";
  int score=0;
};
int main() {
  // 请开始你的表演
  Student s1;
  s1.print_info();
  Student s2("zhangsan",65);
  s2.print_info();  
  return 0;
}
