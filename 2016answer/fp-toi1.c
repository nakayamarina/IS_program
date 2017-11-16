#include<stdio.h>

int main(){
  int a=20, b=123;
  double e=10.0, f=3.14;
  char g='a';

  printf("9l:%3d%3d\n", a, b);
  printf("10l:%3d\n", a%b);
  printf("11l:%5.2f%5.2f\n", e, f);
  printf("12l:%d\n", g);
  printf("13l:%c\n", g-3);
  printf("14l:%x\n", g-3);
  printf("15l:%p\n", &a);
  printf("16l:%p\n", &a-1);

  return 0;
}
