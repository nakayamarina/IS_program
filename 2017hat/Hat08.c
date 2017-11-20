// [発展問題]
// 整数a(=10)を引数に取り、a/4を計算し整数と実数型の結果を
// 引数としてくけとった2つのアドレスに書き込む関数idreturnを作成せよ。

// [出力例]
// 字数型 = 2.500000, 整数 = 2


#include <stdio.h>

void idreturn(int a, double *pa, int *pb);

int main() {
  int a = 10;
  double q;
  int r;

  idreturn(a, &q, &r);

  printf("字数型 = %f, 整数 = %d\n", q, r);

  return 0;
}


void idreturn(int a, double *pa, int *pb) {

  *pa = a / 4.0;
  *pb = a / 4;

}
