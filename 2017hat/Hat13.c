// [発展問題]
// 11月のホテル宿泊日数、料金を算出するプログラムを作成せよ
//
// ホテルについて
// ・平日5000円, 土日祝日8000円
// ・シニアデイ：シニア世代限定で月曜日の料金が4500円になる
// ・子供割：子供限定で料金は3割引になる

// [入力例] 子供が11/3〜11/10に宿泊する場合
// 11月の宿泊
// Check In：3
// Check Out：10
// 世代(子供：0, 大人：1, シニア：2)：0
// [出力例]
// 平日 4日, 土日祝3日, 合計7泊 ※子供割適用
// 合計宿泊料金は33264円(税込)です

// [入力例] 大人が11/12〜12/25まで宿泊する場合
// Check In：12
// Check Out：25
// 世代(子供：0, 大人：1, シニア：2)：1
// [出力例]
// 平日 9日, 土日祝4日, 合計13泊
// 合計宿泊料金は83160円(税込)です

// [入力例] シニアが11/19〜11/28まで宿泊する場合
// 11月の宿泊予定(平日：5000円, 土日祝：8000円(税抜き))
// Check In：19
// Check Out：28
// 世代(子供：0, 大人：1, シニア：2)：2
// [出力例]
// 平日 5日(内シニアデイ 2日), 土日祝4日, 合計9泊
// 合計宿泊料金は60480円(税込)です


#include <stdio.h>

//曜日を調べる関数week
int week(int date){

  int weekNumber;

  switch(date % 7){
    case 5:
      weekNumber = 0;
      break;
    case 6:
      weekNumber = 1;
      break;
    case 0:
      weekNumber = 2;
      break;
    case 1:
      weekNumber = 3;
      break;
    case 2:
      weekNumber = 4;
      break;
    case 3:
      weekNumber = 5;
      break;
    case 4:
      weekNumber = 6;
      break;
    }

    return weekNumber;
}


int main(){
  int ci, co, generation;
  int i;
  int weekNumber;
  int holiday = 0, weekday = 0, monday = 0;
  int price;

  //Check In, Check Outの日と世代を入力
  printf("11月の宿泊\n");
  printf("Check In：");
  scanf("%d", &ci);
  printf("Check Out：");
  scanf("%d", &co);
  printf("世代(子供：0, 大人：1, シニア：2)：");
  scanf("%d", &generation);

  //Check In(ci)〜Check Out(co)の間に含まれる平日、月曜、土日祝の数を数える
  //11月の祝日は11/3と11/23
  //曜日ナンバー [0:日曜, 1:月曜, 2:火曜, 3:水曜, 4:木曜, 5:金曜, 6:土曜]
  for(i = ci; i < co; i ++) {
    //曜日ナンバーを取得
    weekNumber = week(i);
    if((i == 3) || (i == 23) || (weekNumber == 0) || (weekNumber == 6)){
      //祝日(i = 3 or 23)または土日(weekNumber = 0 or 6)ならば祝日数をカウント
      holiday += 1;
    } else {
      //上記以外ならば平日をカウント
      weekday += 1;
    }

    //月曜日もカウントしておく
    if(weekNumber == 1) {
      monday += 1;
    }
  }

  switch(generation){
    case 0:
      //料金計算 -> 税込計算、子供なので3割引
      price = (((5000 * weekday) + (8000 * holiday)) * 1.08) * 0.7;
      printf("\n平日 %d日, 土日祝%d日, 合計%d泊 ※子供割適用\n", weekday, holiday, co - ci);
      printf("合計宿泊料金は%d円(税込)です\n", price);
      break;
    case 1:
      //料金計算 -> 税込計算
      price = ((5000 * weekday) + (8000 * holiday)) * 1.08;
      printf("\n平日 %d日, 土日祝%d日, 合計%d泊\n", weekday, holiday, co - ci);
      printf("合計宿泊料金は%d円(税込)です\n", price);
      break;
    case 2:
      //料金計算 -> 税込計算、月曜以外の平日の料金 + 月曜(シニアデイ)の料金 + 土日祝の料金
      price = ((5000 * (weekday-monday)) + (4500 * monday) + (8000 * holiday)) * 1.08;
      printf("\n平日 %d日(内シニアデイ %d日), 土日祝%d日, 合計%d泊\n", weekday, monday, holiday, co - ci);
      printf("合計宿泊料金は%d円(税込)です\n", price);
      break;
  }

  return 0;

}
