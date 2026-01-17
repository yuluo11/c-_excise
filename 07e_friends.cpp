#include <iostream>
#include <string>

// Quest 07-E: 友元与封装 (Friends & Encapsulation)
// 难度：Hardcore
// 目标：Ch 7.2 Access Control and Encapsulation - Friends

// 背景：
// 我们通常把数据 private 起来保护。
// 但有时候，我们需要一个“外部函数”或者“另一个类”能直接访问我的私有数据。
// 这时候就需要发一张“好人卡” (friend)。

// 任务需求：
// 1. 定义一个 `Bank` 类。
// 2. 私有成员 (private): `int money` (初始值为 0)。
// 3. 定义一个全局函数 `void rob_bank(Bank& b, int amount)`。
//    - 试图直接修改 b.money -= amount;
// 4. 在 Bank 类中，将 `rob_bank` 声明为 friend (友元)。
// 5. 在 main 中：
//    - 创建 Bank b;
//    - 调用 `rob_bank` 抢走 100 块。
//    - (验证) 如果去掉 friend 声明，编译应该报错。

class Bank;
void rob_bank(Bank &b,int amout);

class Bank
{
  friend void rob_bank(Bank &b,int amout);
  
  public:
  void check_banlance()const{
  std::cout<<money<<std::endl;
  }
  Bank()=default;
  private:
  int money=0;
};
int main() {
  // 请开始你的表演
  Bank b;
  b.check_banlance();
  rob_bank(b,100);
  b.check_banlance();
  return 0;
}

void rob_bank(Bank &b,int amout)
{
    b.money-=amout;
}