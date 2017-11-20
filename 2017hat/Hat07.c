// [発展問題]
// 「0〜255までの数字を入力してください」という条件通りに入力されているかチェックし、
// 入力されていなければエラー番号を返す関数ErrorCheckを作成せよ。
// エラー番号は255以上：1、条件通り：0、負の数：-1とする。

// [入力例]
// 0〜255までの数字を入力してください
// number = 398
// [出力例]
// 1(Error)：数字が大きすぎます

// [入力例]
// 0〜255までの数字を入力してください
// number = 43
// [出力例]
// 0(No Error)：正しく入力されています

// [入力例]
// 0〜255までの数字を入力してください
// number = -356
// [出力例]
// -1(Error)：正の数を入力してください


#include <stdio.h>

int getn() {
  int x;
  fflush(stdout);
  scanf("%d", &x);

  return x;
}

int ErrorCheck(int number){
  int error;

  //入力された数字を調べエラー番号を返す
  if(number > 255){
    error = 1;
    return error;

  } else if (number < 0) {
    error = -1;
    return error;

  } else {
    error = 0;
    return error;
  }
}


int main()
{
  int number;
  int error;

  printf("0〜255までの数字を入力してください\n");
  printf("number = ");
  number = getn();

  error = ErrorCheck(number);

  //エラー番号に応じてメッセージ文を出す
  //エラー番号を表示するだけでも良い
  if(error == 1) {
    printf("%d(Error)：数字が大きすぎます\n", error);
  } else if (error == 0) {
    printf("%d(No Error)：正しく入力されています\n", error);
  } else if (error == -1) {
    printf("%d(Error)：正の数を入力してください\n", error);
  }

  return 0;
}
