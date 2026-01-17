#include <cstring> // 既然是 C 风格字符串，可能需要这个
#include <iostream>
#include <vector>

// Quest 3.5: 数组与指针 (The Legacy of C Arrays)
// 难度：Hardcore (无代码提示)
// 目标：Ch 3.5 Arrays

// 任务需求：
// 1. 定义一个大小为 10 的 int 数组 `arr`，并将所有元素初始化为 0。
// 2. 使用 for 循环（下标法）给数组赋值：arr[i] = i * 10;
// 3. 【重点】定义一个 int 指针 `p`，让它指向 `arr` 的开头。
// 4. 使用【指针运算】(Pointer Arithmetic) 和 while 循环遍历数组并打印值。
//    (即：不要用 arr[i]，而是用 *p 和 p++)
// 5. 【加分项】：定义两个 C 风格字符串 (char str1[], char str2[])，
//    比较它们是否相等 (不能用 ==，要用 strcmp)。

int main() {
  // 请开始你的表演
  int arr[10]={0};
  for(int i=0;i<10;i++)
  {
      arr[i]=i*10;
  }
  int *p=arr;
  int i=0;
  while(i<10)
  {
      std::cout<<*(p+i)<<std::endl;
      i++;
  }
  return 0;
}
