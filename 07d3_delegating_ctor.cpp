#include <iostream>
#include <string>

// Quest 07-D3: 委托构造函数 (Delegating Constructors)
// 难度：Hardcore
// 目标：Ch 7.5.2 Delegating Constructors (提前练习)

// 背景：
// 如果我们有三个构造函数：
// 1. Student(string n, int s, string id) : 处理核心初始化 ...
// 2. Student() : 想让它等同于 Student("Unknown", 0, "NoID")
// 3. Student(string s) : 想让它等同于 Student(s, 0, "NoID")
//
// 以前我们需要把代码复制粘贴三遍。
// C++11 允许一个构造函数“委托”另一个构造函数来干活。

// 任务需求：
// 1. 定义 Student 类 (name, score, id)。
// 2. 定义【主构造函数】 (3个参数)，负责真正的初始化工作。
//    - `Student(string n, int s, string i) : ... {}`
// 3. 定义【默认构造函数】。
//    - 使用委托构造：`Student() : Student("Unknown", 0, "NoID") { ... }`
//    - 在函数体里打印 "Delegated default constructor" 以便验证。
// 4. 定义【单参数构造函数】 (接受 name)。
//    - 使用委托构造：`Student(string n) : Student(n, 0, "NoID") { ... }`
// 5. 在 main 中：
//    - `Student s1;`
//    - `Student s2("Alice");`
//    - `Student s3("Bob", 100, "S001");`
//    - 验证它们是否都正确初始化了。
class Student;

class Student
{
  public:
  Student()=default;
  Student(std::string n,int s,std::string i):name(n),score(s),id(i){}
  Student(std::string n ):Student(n,0,"NoID"){}
  void print_info(){
    std::cout<<"Student: "<<name<<", Score:"<<
    score<<", ID:"<<id<<std::endl;
  };
  private:
  std::string name="unknow";
  int score=0;
  std::string id="NoID";
};
int main() {
  // 请开始你的表演
  Student s1;
  s1.print_info();
  Student s2("zhangsan");
  s2.print_info();
  Student s3("zhangsan",100,"s003");
  s3.print_info();
  return 0;
}
