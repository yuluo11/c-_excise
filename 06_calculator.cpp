#include <iostream>

// 练习目标：
// 1. 练习函数的声明与定义
// 2. 练习 "单一职责原则" (Single Responsibility Principle) - 每个函数只做一件事

// TODO: 在这里声明你的函数 (add, subtract, multiply, divide)
// 提示： divide 函数需要考虑除数为 0
// 的情况吗？（虽然这里作为简易版可以先不处理，或者返回0并打印错误）
double add(double a,double b);
double sub1(double a,double b);
double mul1(double a,double b);
double div1(double a,double b);
int main() {
  double num1, num2;
  char op; // 运算符 operator (+, -, *, /)

  std::cout << "请输入算式 (例如 10 + 20): " << std::endl;
  std::cin >> num1 >> op >> num2;

  // TODO: 根据 op 的值，调用相应的函数并打印结果
  // switch (op) { ... }
  switch(op)
  {
    case '+':
        std::cout<<add(num1,num2)<<std::endl;
        break;
    case '-':
        std::cout<<sub1(num1,num2)<<std::endl;
        break;
    case '*':
        std::cout<<mul1(num1,num2)<<std::endl;
        break;
    case '/':
        std::cout<<div1(num1,num2)<<std::endl;
        break;
    default:
        std::cout<<"no string could be chioce"<<std::endl;
  }
  return 0;
}
double add(double a,double b)
{
    double sum=a+b;
    return sum;
}

double sub1(double a,double b)
{
    double sub=a-b;
    return sub;
}

double mul1(double a,double b)
{
  double mul=a*b;
  return mul;
}

double div1(double a,double b)
{
    if(b==0)
      return -1;
    double div=a/b;
    return div;
}

// TODO: 在这里实现你的函数
