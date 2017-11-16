//解答 (1)1 (2)0 (3)1 (4)0 (5)8 (6)4 (7)0 (8)5 (9)3 (10)3 (11)1

#include<stdio.h>

int Swap1(int a, int b);
int Swap2(int *a, int *b);

int main()
{
  int a = 3, b = 4, c = 5, d = 9;

  c = Swap1(a, b); // c = 3
  printf("a=%d, b=%d, c=%d, d=%d\n", a, b, c ,d); // a=3, b=4, c=3. d=9

  d = Swap2(&a, &b); // d=3
  printf("a=%d, b=%d, c=%d, d=%d\n", a, b, c, d); // a=4, b=3, c=3, d=3

  return 0;
}

// aとbの入れ替えはこのSwap1関数内でのみ
// aの値3が代入されたtmpを返す
int Swap1(int a, int b){
  int tmp;
  tmp = a;
  a = b;
  b = tmp;
  return tmp;
}

// aの値3が代入されたtmpを返す
// またアドレスが渡すことで呼び出し元の関数(main)の変数の値の読み書きが可能
// よってmain関数でもaとbの値は入れ替わっている
int Swap2(int *a, int *b){
  int tmp;
  tmp = *a;
  *a = *b;
  *b = tmp;
  return tmp;
}
