//解答 (1)1 (2)0 (3)1 (4)0 (5)8 (6)4 (7)0 (8)5 (9)3 (10)3 (11)1

#include<stdio.h>

int Swap1(int a, int b);
int Swap2(int *a, int *b);

int main()
{
  int a = 3, b = 4, c = 5, d = 9;

  c = Swap1(a, b);
  printf("a=%d, b=%d, c=%d, d=%d\n", a, b, c ,d);

  d = Swap2(&a, &b);
  printf("a=%d, b=%d, c=%d, d=%d\n", a, b, c, d);

  return 0;
}

int Swap1(int a, int b){
  int tmp;
  tmp = a;
  a = b;
  b = tmp;
  return tmp;
}

int Swap2(int *a, int *b){
  int tmp;
  tmp = *a;
  *a = *b;
  *b = tmp;
  return tmp;
}
