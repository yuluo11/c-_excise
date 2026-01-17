#include <iostream>

// 练习目标：
// 1. 理解 "值传递" (Pass by Value) 的局限性
// 2. 掌握 "引用传递" (Pass by Reference) - C++ 的核心魔法
// 3. (选做) 了解 "指针传递" (Pass by Pointer) - C 语言的老路子

// TODO 1: 编写一个函数 swap_v1，尝试交换两个整数
// void swap_v1(int a, int b) { ... }
void swap_v1(int a,int b);

// TODO 2: 编写一个函数 swap_v2，使用【引用】真正的交换两个整数
// void swap_v2(int& a, int& b) { ... }
void swap_v2(int &a,int &b);

// TODO 3: 编写一个函数 swap_v3，使用【指针】交换两个整数
// void swap_v3(int* a, int* b) { ... }
void swap_v3(int *a,int *b);

int main() {
  int x = 10;
  int y = 20;

  std::cout << "初始状态: x=" << x << ", y=" << y << std::endl;

  // 测试 swap_v1
  // swap_v1(x, y);
  // std::cout << "v1(值传递)后: x=" << x << ", y=" << y << " (应该没变)" <<
  // std::endl;
  swap_v1(x,y);
  std::cout << "v1(值传递)后: x=" << x << ", y=" << y << " (应该没变)" <<
  std::endl;  
  swap_v2(x, y);
  std::cout << "v2(引用)后:   x=" << x << ", y=" << y << " (应该变了)" <<
  std::endl;
  

  return 0;
}
void swap_v1(int a ,int b)
{
    int temp=a;
    a=b;
    b=temp;
}

void swap_v2(int &a,int &b)
{
      int temp=a;
      a=b;
      b=temp;
}

void swap_v3(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}