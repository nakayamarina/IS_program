//解答 (1)0 (2)1 (3)1 (4)1 (5)2 (6)1 (7)3

#include<stdio.h>

// 構造体の定義
struct Stack {
  int data[100]; // スタック配列
  int stackPointer; // 次にpushした時に格納される位置
};

void push(struct Stack *st, int n);
int pop(struct Stack *st);

int main()
{
  int i, n;
  struct Stack st;

  // スタックとstackPointerの初期化
  st.stackPointer = 0;
  for(i = 0; i < 100; i ++){
    st.data[i] = 0;
  }

  push(&st, 25); // 25, 0, 0 stackPointer = 1
  push(&st, 32); // 25, 32, 0 stackPointer = 2
  n = pop(&st); // 25, 32, 0 stackPointer = 1
  printf("%d\n", n);
  push(&st, 55); // 25, 55, 0 stackPointer = 2

  n = pop(&st); // 25, 55, 0 stackPointer = 1
  printf("%d\n", n);
  n = pop(&st); // 25, 55, 0 stackPointer = 0
  printf("%d\n", n);
  n = pop(&st); // 25, 55, 0 stackPointer = 0なので「Stack is empty.」　が出力される
  printf("%d\n", n); // stackPointer = 0なので-1が返されるので「-1」が出力される

  for(i = 0; i < 10; i++){
    push(&st, i);
  }

  // 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 が格納される
  // stackPointer = 10

  push(&st, 10); // 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 stackPointer = 11

  return 0;
}

//　pushする対象となるスタックとpushする値を受け取る
// スタックが一杯の場合は何もしない
void push(struct Stack *st, int n){

  if(st->stackPointer == 100){
    printf("Stack is Full.\n");
    return; // ここで終了するためにreturn
  }

  st->data[st->stackPointer] = n;
  st->stackPointer++;
}


// popする対象となるスタックを受け取り値を返す
// スタックがからの場合はメッセージを表示した上で-1を返す
int pop(struct Stack *st){
  if(st->stackPointer == 0){
    printf("Stack is empty\n");
    return -1;
  }

  st->stackPointer--;
  return st->data[st->stackPointer];
}
