// [発展問題]
// 3.1425と3の足し算を行った結果を、
// 整数型(小数点以下切り捨て)と実数型の２パターンを出力するプログラムを作成せよ。

#include <stdio.h>
int main()
{
  double a = 3.1425;
  int b = 3;

  int sum1 = a + b;
  double sum2 = a + b;

  // 整数型
  printf("%d\n", sum1);
  // 整数型(別解)
  printf("%.f\n", sum2);

  // 実数型
  printf("%f\n", sum2);

  return 0;
}
