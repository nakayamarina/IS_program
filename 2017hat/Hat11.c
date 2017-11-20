// [発展問題]
// バイタル情報を表す構造体vitalsの配列を作り、
// その配列に関数scanfで値を入力するプログラムを作成せよ。
// バイタル情報 -> ID, 日付(4桁 例)2017/9/23ならば20170923), 体温, 血圧(上), 血圧(下)

// [入力データ例]
// ID：1
// 日付(8文字)：19940927
// 体温(小数第一位まで)：37.5
// 血圧上(3桁以内)：123
// 血圧下(3桁以内)：88
// ID：2
// 日付(8文字)：19890528
// 体温(小数第一位まで)：36.5
// 血圧上(3桁以内)：111
// 血圧下(3桁以内)：88
// ID：3
// 日付(8文字)：19990811
// 体温(小数第一位まで)：38.4
// 血圧上(3桁以内)：132
// 血圧下(3桁以内)：99

// [出力例]
// ID     日付       体温  血圧
// 00001  19940927  37.5 123-088
// 00002  19890528  36.5 111-088
// 00003  19990811  38.4 132-099

#include <stdio.h>
#include <string.h>

struct vitalsTag {
   int ID;
   char days[10];
   double temp;
   int press_sys;
   int press_dia;
};

void print_vitals(struct vitalsTag *vitals);

int main() {
  int i;
  struct vitalsTag vitals[10], *vitals_ptr;

  for(i = 0; i < 3; i++){
    printf("ID：");
    scanf("%d", &(vitals[i].ID));
    printf("日付(8文字)：");
    scanf("%s", vitals[i].days);
    printf("体温(小数第一位まで)：");
    scanf("%lf", &(vitals[i].temp));
    printf("血圧上(3桁以内)：");
    scanf("%d", &(vitals[i].press_sys));
    printf("血圧下(3桁以内)：");
    scanf("%d", &(vitals[i].press_dia));
  }


  printf("ID     日付      体温 血圧\n");
  for(i = 0; i < 3; i++){
    vitals_ptr = &vitals[i]; print_vitals( vitals_ptr);
  }
  return 0;
}

void print_vitals(struct vitalsTag *vitals) {
  printf("%05d  %s  %02.1f %03d-%03d\n", vitals->ID, vitals->days, vitals->temp, vitals->press_sys, vitals->press_dia);
}
