#include <iostream>

// Quest 3.6: 多维数组 (The Matrix Grid)
// 难度：Hardcore (无代码提示)
// 目标：Ch 3.6 Multidimensional Arrays

// 任务需求：
// 1. 定义一个 3行 4列 的二维整数数组 `grid` (int grid[3][4])。
// 2. 使用【嵌套循环】(Nested Loops) 初始化数组：
//    - grid[row][col] = row * 4 + col;
//    (这样会产生 0-11 的连续数字)
// 3. 再次使用嵌套循环，以矩阵的形式打印出来（每行打完要换行）。

// --- 拓展任务 (C++11 Range-based For) ---
// 目标：使用“范围 for 循环”遍历多维数组。
// ⚠️ 陷阱提示：
// 如果你写 for (auto row : grid)，编译器会报错。
// 因为 grid 的元素是“数组”，auto 会把它退化成“指针”(int*)。
// 而指针是无法被“范围遍历”的。
//
// 任务：
// 4. 请使用 for (auto& row : grid) (注意那个 &) 来遍历每一行。
// 5. 在内层循环打印每个元素，试试看能不能再打印一遍矩阵。

int main() {
  // 1 & 2 & 3: 你的旧代码 (标准下标法)
  int arr[3][4];
  std::cout << "--- Standard For Loop ---" << std::endl;
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 4; j++) {
      arr[i][j] = i * 4 + j;
      std::cout << arr[i][j] << " ";
    }
    std::cout << std::endl;
  }

  // 4 & 5: 请在下面尝试 Range-based For Loop
  std::cout << "\n--- Range-based For Loop (Expansion) ---" << std::endl;
  // TODO: 你的代码...
  for(auto &i:arr)
  {
      for(auto j:i)
      {
          std::cout<<j<<" ";
      }
      std::cout<<std::endl;
  }

  return 0;
}
