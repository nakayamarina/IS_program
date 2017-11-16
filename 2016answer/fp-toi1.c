//解答 (1)2 (2)1 (3)6 (4)6 (5)1 (6)4 (7)4

#include<stdio.h>

int main()
{
  int a=20, b=123;
  double e=10.0,f=3.14;
  char g='a'; //ASCIIコード表を参照 16進数で61, 10進数に変換すると97

  printf("9l:%3d%3d\n", a, b);
  printf("10l:%3d\n", a % b);
  printf("11l:%5.2f%5.2f\n", e,f);//5 桁の小数点弟2位
  printf("12l:%d\n", g-3); // 10進数 97-3=94
  printf("13l:%c\n", g-3); // ASCIIコード表を参照 文字 a-3=^
  printf("14l:%x\n", g-3); // 16 進数 61-3=5e %X(大文字)なら 5E
  printf("15l:%p\n",&a);
  printf("16l:%p\n",&a+1); // intは4バイトのメモリ領域をとるので、15行目で出力したアドレスから4増えたアドレスとなる

  return 0;
}
