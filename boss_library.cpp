#include <iostream>
#include <string>
#include <vector>

// 🏆 Phase 1 Boss Fight: 简易图书管理系统
// 目标：将之前学到的所有知识 (Vector, Loop, If/Switch, Class) 融会贯通。

// TODO 1: 定义 Book 类
// 至少包含: title (书名), author (作者), year (年份)
// 思考：成员变量应该是 public 还是 private？如果是 private，需要 getter 吗？
class Book {
public:
  std::string title;
  std::string author;
  int year;

  // 构造函数 (可选，但推荐)
  Book(std::string t, std::string a, int y) {
    title = t;
    author = a;
    year = y;
  }
};

// 全局变量虽然也不好，但为了简单，我们可以把 library 传给函数，或者暂时放 main
// 里 更好的方式是定义一个 Library 类来管理 vector<Book>，但 Phase 1 先从简。

void add_book(std::vector<Book> &lib) {
  // TODO 2: 实现添加书籍的逻辑
  // 提示：std::cin >> ... -> lib.push_back(...)
  std::cout << "--- 添加新书 ---" << std::endl;
}

void list_books(const std::vector<Book> &lib) {
  // TODO 3: 打印所有书籍
  // 如果 library 为空，打印提示
  std::cout << "--- 图书列表 ---" << std::endl;
}

int main() {
  std::vector<Book> library;
  int choice;

  while (true) {
    std::cout << "\n=== 图书管理系统 ===" << std::endl;
    std::cout << "1. 添加书籍" << std::endl;
    std::cout << "2. 查看所有书籍" << std::endl;
    std::cout << "3. 退出" << std::endl;
    std::cout << "请选择: ";

    std::cin >> choice;

    // TODO 4: 使用 switch 处理菜单逻辑
    if (choice == 3) {
      std::cout << "再见！" << std::endl;
      break;
    }

    // 你的代码...
  }

  return 0;
}
