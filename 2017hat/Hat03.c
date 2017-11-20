// [発展問題]
// 4つの整数が入力で与えられた時、数字の種類数を出力するプログラムを作成せよ。

// [入力例]数字の種類が1つ(10)の時
// number1 = 10
// number2 = 10
// number3 = 10
// number4 = 10
// [出力例]
// result1 = 1

// [入力例]数字の種類が3つ(10, 12, 14)の時
// number1 = 12
// number2 = 10
// number3 = 14
// number4 = 10
// [出力例]
// result1 = 3

#include <stdio.h>

int getn() {
  int x;
  fflush(stdout);
  scanf("%d", &x);

  return x;
}


int main() {

  int number1, number2, number3, number4;
  //種類数
  //最初の入力された数字で1種類になるので初期値は1
  int result1 = 1;
  int result2 = 1;

  //4つの数字の入力
  printf("number1 = ");
  number1 = getn();
  printf("number2 = ");
  number2 = getn();
  printf("number3 = ");
  number3 = getn();
  printf("number4 = ");
  number4 = getn();

  //[解答例1]

  //ある入力の数字がそれより前に入力された数字のどれとも被ってなければ result1 + 1
  if (number2 != number1) {
    result1 = result1 +  1;
  }
  if ((number3 != number1) && (number3 != number2)) {
    result1 = result1 +  1;
  }
  if ((number4 != number1) && (number4 != number2) && (number4 != number3)) {
    result1 = result1 +  1;
  }

  printf("result1 = %d\n", result1);



  //[解答例2]

  // ある入力された数字がそれより前に入力された数字のいずれかと被っていればなにもしない
  // それ以外は result1 + 1
  if (number2 == number1) {

  } else {
    result2 = result2 + 1;
  }
  if ((number3 == number1) || (number3 == number2)) {

  } else {
    result2 = result2 + 1;
  }
  if ((number4 == number1) || (number4 == number2) || (number4 == number3)) {

  } else {
    result2 = result2 + 1;
  }

  //printf("result1 = %d\n", result2);

  return 0;
}
