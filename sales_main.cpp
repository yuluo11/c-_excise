#include "Sales_data.h"
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

// Quest 7.Final: 测试
// 所有逻辑都在 Sales_data.h 里，这里只负责调用。

int main() {
  // 任务: 编写测试逻辑
  // 1. 创建几个 Sales_data 对象
  // 2. 测试 combine
  // 3. 测试 add
  // 4. 测试 print
  Sales_item b1={"999-99",10,20};
  cout<<b1.isbn()<<" "<<b1.avg_price()<<endl;
  Sales_item b2={"555-55",4,15};
  cout<<b2.isbn()<<" "<<b2.avg_price()<<endl;
  b2.combine(b1);
  cout<<b2.isbn()<<" "<<b2.avg_price()<<endl;
  return 0;
}
