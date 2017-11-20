// [発展問題]
// 0から50までの整数で、2の倍数の時はその数を加算し、3の倍数の時はその数を減算、
// 2と3の倍数の時はその数の1/2したものを加算するプログラムを作成せよ。


#include <stdio.h>

int main()
{
  int i = 0;
  int result = 0;

  while(i < 50) {
    if(i % 2 == 0) {
      //iが2の倍数の時はiを加算
      result += i;
    } else if(i % 3 == 0) {
      //iが3の倍数の時はiを減算
      result -= i;
    } else if((i % 2 == 0) && (i % 3 == 0)) {
      //iが2と3の倍数の時はi/2を加算
      result = result + (i / 2);
    }
    i += 1;
  }

  printf("%d\n", result);

  return 0;
}
