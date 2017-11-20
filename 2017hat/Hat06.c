// [発展問題]
// 配列arrayを{10, 11, 29, 12, 13, 10, 3, 13, 36, 21}で初期化して、
// 数字の種類と種類数を出力するプログラムを作成せよ。

// [出力例]
// [10, 11, 29, 12, 13, 3, 36]
// type = 8

#include <stdio.h>


int main()
{

  //配列を初期化
  int numbers[] = {10, 11, 29, 12, 13, 10, 3, 13, 36, 21};

  //数字の種類を格納する配列typesを用意する
  //type_endはtypesに格納された値の数をカウントする用 -> sizeof(types)でも可
  int types[10], types_end = 0;
  int count = 0;
  int i, j;

  for(j = 0; j < 10; j++) {
    if(j == 0){
      //1番目の値をtypesに格納
      types[types_end] = numbers[j];
    } else {
      //2番目以降は調べたい数より前の数に同じ数字があるかを調べる
      //同じ数字があれば count + 1
      count = 0;
      for(i = 0; i < j; i++) {
        if(numbers[i] == numbers[j]){
          count += 1;
        }
      }
      //count == 0 のときは同じ数字がなかったことになるのでtypesに格納
      if(count == 0){
        types_end += 1;
        types[types_end] = numbers[j];
      }
    }
  }

  //結果を出力
  printf("[");
  for(i = 0; i <= types_end; i++) {
    if(i < types_end){
      printf("%d, ", types[i]);
    } else {
      printf("%d", types[i]);
    }
  }
  printf("]\n");

  printf("type = %d\n", types_end + 1);


  return 0;
}
