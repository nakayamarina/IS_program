//解答 (1)00 (2)06 (3)4 (4)2 (5)3

#include<stdio.h>

int main()
{
  int i;

  for(i = 5; i < 17; i += 2){ //iの値は5から始まり7,9,11,13,15と2ずつ加算される
    if(i ==8){
      break; //iの値が8になることはないためbreakはしない
    }
    printf("i=%d\n",i);
  }

  return 0;
}
