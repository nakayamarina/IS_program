// [発展問題]
// 30文字以内のパスワードを2回入力させ、
// 2回目のパスワードが正しく入力されたか調べるプログラムを作成せよ

// [入力例]
// パスワードを入力してください -> kutlms
// もう一度パスワードを入力してください -> kutlms
// [出力例]
// パスワードを受け付けました

// [入力例]
// パスワードを入力してください -> kutlms
// もう一度パスワードを入力してください -> kutlmsda
// [出力例]
// Error：2回目のパスワードが正しくありません

#include <stdio.h>

int main()
{
  char pass1[10];
  char pass2[10];
  int i = 0, j = 0, count = 0;

  printf("パスワードを入力してください -> ");
  scanf(" %s", pass1);

  printf("もう一度パスワードを入力してください -> ");
  scanf(" %s", pass2);

  //1回目のパスワードと2回目のパスワードを照合
  //違いがあれば count + 1
  while(pass1[i] != '\0') {
    if(pass1[i] != pass2[i]) {
      count += 1;
    }
    i += 1;
  }

  //2回目のパスワードの文字列の長さを調べる
  while(pass2[j] != '\0') {
    j += 1;
  }

  //違いがない(count == 0)かつ1回目と2回目のパスワードの文字列の長さが同じであればOK
  //それ以外はエラー出力
  if((count == 0) && (i == j)) {
    printf("パスワードを受け付けました\n");
  } else {
    printf("Error：2回目のパスワードが正しくありません\n");
  }

  return 0;
}
