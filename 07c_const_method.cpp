#include <iostream>
#include <string>

// Quest 07-C: 常量成员函数 (Const Member Functions)
// 难度：Hardcore
// 目标：Ch 7.1.2 Defining Member Functions - "this" and "const"

// 背景：
// 当一个对象被声明为 const 时，它只能调用 "const 成员函数"。
// 语法：void func() const { ... }

// 任务需求：
// 1. 定义 Student 类 (name, score)。
// 2. 定义 `set_data` (非 const，因为它要修改数据)。
// 3. 定义 `print_info`，并在参数列表后加上 `const` 关键字。
// 4. 在 main 中：
//    - 创建 `Student s1`，调用 `set_data` 初始化。
//    - 创建一个 const 引用：`const Student& r = s1;`
//    - 尝试调用 `r.set_data(...)` (这一行应该报错，可以注释掉并说明原因)。
//    - 尝试调用 `r.print_info()` (如果没有加 const 关键字，这里也会报错)。
class Student;

class Student
{
    public:
    void set_data(std::string n,int s);
    void print_info()const{std::cout<<"Student: "
        <<name<<", Score:"<<score<<std::endl;};
    private:
    std::string name;
    int score;
};
void Student::set_data(std::string n,int s)
{
    name=n,score=s;
};
int main() {
    // 请开始你的表演
    Student s1;
    s1.set_data("zhangsan",65);
    const Student &r=s1;
    //r.set_data()error becase just read as const
    r.print_info();    
    return 0;
}
