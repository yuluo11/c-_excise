#include <iostream>

// Quest 6.1: 静态局部变量 (Local Static Objects)
// 难度：Hardcore (无代码提示)
// 目标：Ch 6.1.1 Local Static Objects

// 背景：
// 通常局部变量 (Local Variable) 在函数结束时就会销毁。
// 但如果我们想让一个函数“记住”它被调用了多少次，该怎么办？
// 使用 `static` 关键字！

// 任务需求：
// 1. 编写一个函数 `int count_calls()`。
// 2. 在函数内部定义一个 **静态局部变量** `static int ctr = 0;`。
// 3. 每次调用时，让 `ctr` 加 1，并返回当前的值。
// 4. 在 `main` 中使用 for 循环调用这个函数 5 次，并在每次调用时打印返回值。
// 5. 预期输出：1, 2, 3, 4, 5

// 思考：如果去掉 static，输出会变成什么？
int count_calls();
int main() {
  // 请开始你的表演
    for(int i=0;i<5;i++)
    {
        int temp=count_calls();
        std::cout<<temp<<", ";
    }

  return 0;
}
int count_calls()
{
    static int ctr=0;
    ctr++;
    return ctr;
}