//解答 (1)0 (2)5 (3)3 (4)6 (5)7 (6)2 (7)2 (8)3 (9)0 (10)3 (11)4

#include<stdio.h>
#include<string.h>

// 構造体の定義
struct PhonesTag{
  char name[32];
  char tel[32];
  int gid;
};

int InputPhones(struct PhonesTag *pPhone);
void printPhones(int num, struct PhonesTag *pPhone);

int main(){
  struct PhonesTag phones[32];
  int num, ret;

  // 最大32回入力を受け取る
  for(num = 0; num < 32; num++){
    // 電話情報を入力
    // 正しく入力されれば0が返ってくる
    // nameで"end"が入力されると-1が返ってくる
    ret = InputPhones(&phones[num]);

    // retが0でなければ(-1が返ってきた時)入力を終了する
    if(ret != 0){
      break;
    }
  }

  // 表示
  printPhones(num, phones);

  return 0;
}

int InputPhones(struct PhonesTag *pPhone){

  // 名前を入力
  printf("Input your name:");
  scanf(" %[^\n]", pPhone->name);

  // 入力された文字列と文字列"end"を比較
  // 同じ場合(strcmp(pPhone->name, "end")==0)は-1を返す
  if(strcmp(pPhone->name, "end")==0){
    return -1;
  }

  // 電話番号を入力
  printf("Input your phone number:");
  scanf(" %[^\n]", pPhone->tel);

  // IDを入力
  printf("Input group id:");
  scanf(" %d", &(pPhone->gid));
  return 0;
}

void printPhones(int num, struct PhonesTag *pPhone){
  int i;
  for(i = 0; i < num; i++){
    printf("**** member %d ****\n", i);
    printf("name : %s\n", pPhone[i].name);
    printf("phone : %s\n", pPhone[i].tel);
    printf("group id : %d\n", pPhone[i].gid);
  }
  return;
}
