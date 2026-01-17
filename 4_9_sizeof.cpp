#include <iostream>

// Quest 4.9: ### sizeof 的秘密 (The Sizeof Mystery)

// ... (你的上部分代码已完成)

// --- 拓展任务：数组退化陷阱 (Array Decay Trap) ---
// 只要你觉得有意思，我们就来点更刺激的。
// 很多新手以为 void func(int arr[]) 里的 arr 是数组，其实它是...？

// 任务：
// 1. 编写一个函数 `void print_size(int arr[10])`。
//    (注意：虽然写了 [10]，但编译器会忽略它)
// 2. 在函数内部打印 `sizeof(arr)`。
// 3. 在 main 函数里调用 `print_size(arr)`。
// 4. 观察结果：是 40 还是 8？

void print_size(int arr[10]) {
  std::cout << "在函数参数里: sizeof(arr) = " << sizeof(arr) << " (Surprise!)"
            << std::endl;
}

int main() {
  std::cout << "--- Sizeof 探秘 ---" << std::endl;
  int i;
  std::cout << "int i: " << sizeof(i) << std::endl;
  std::cout << "Type int: " << sizeof(int) << std::endl;

  int arr[10];
  std::cout << "Array arr[10]: " << sizeof(arr) << std::endl;
  std::cout << "Length: " << sizeof(arr) / sizeof(arr[0]) << std::endl;
  ;

  int *p = arr;
  std::cout << "Pointer p: " << sizeof(p) << std::endl;

  int &r = i;
  std::cout << "Reference r: " << sizeof(r) << std::endl;

  // --- 拓展部分 ---
  std::cout << "\n--- 拓展: 数组退化 ---" << std::endl;
  print_size(arr);

  return 0;
}
