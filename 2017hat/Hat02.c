// [発展問題]
// 時速30kmで走るバイクと時速75kmで走る車がある。同じ地点からスタートし、195km先のゴールを目指す。
// 車が到着してからバイクが到着するまでの時間差を計算するプログラムを作成せよ。

// [出力例]
// 3 hour 54 minute

#include <stdio.h>

int main()
{

  double bike = 30;
  double car = 75;
  double goal = 195;

  double bike_result;
  double car_result;
  int result, hour, minute;

  //[解答1]

  //バイクが到着するまでの時間
  bike_result = goal / bike;
  //車が到着するまでの時間
  car_result = goal / car;
  //バイクと車の時間差（分）
  result = (bike_result * 60) - (car_result * 60);
  //hourとminute算出
  hour =  result / 60;
  minute = result % 60;

  //出力
  printf("%d hour %d minute\n", hour, minute);
  return 0;
}
