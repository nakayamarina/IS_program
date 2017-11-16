//解答 (1)0 (2)1 (3)1 (4)1 (5)2 (6)1 (7)3

#include<stdio.h>

struct Stack {
  int data[100];
  int stackPointer;
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

  push(&st, 25);
  push(&st, 32);
  n = pop(&st);
  push(&st, 55);

  n = pop(&st);
  printf("%d\n", n);
  n = pop(&st);
  printf("%d\n", n);
  n = pop(&st);
  printf("%d\n", n);

  for(i = 0; i < 10; i++){
    push(&st, i);
  }

  push(&st, 10);

  return 0;
}


void push(struct Stack *st, int n){

  if(st->stackPointer == 100){
    printf("Stack is Full.\n");
    //途中で終わらせるため
    return;
  }

  st->data[st->stackPointer] = n;
  st->stackPointer++;
}


int pop(struct Stack *st){
  if(st->stackPointer == 0){
    printf("Stack is empty\n");
    return -1;
  }

  st->stackPointer--;
  return st->data[st->stackPointer];
}
