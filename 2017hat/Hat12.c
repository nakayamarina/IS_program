// [発展問題]
// 日付をコマンドライン引数として8桁で入力し、
// 「○○○○年××月△△日」で出力するプログラムを作成せよ

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

  int i;
  int count = 0;

  if(argc==1){
    printf("usage: %s date\n", argv[0]);
    return 0;
  }

  //文字列の長さ + '年''月''日' で11回繰り返す
  for(i = 0; i < 11; i++) {
    if(i < 4) {
      printf("%c", argv[1][count]);
      count += 1;
    } else if(i == 4) {
      printf("年");
    } else if((5 <= i) && (i < 7)) {
      printf("%c", argv[1][count]);
      count += 1;
    } else if(i == 7) {
      printf("月");
    } else if((8 <= i) && (i < 10)){
      printf("%c", argv[1][count]);
      count += 1;
    } else if(i == 10){
      printf("日\n");
    }
  }

  return 0;
}
