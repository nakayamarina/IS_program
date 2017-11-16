#include<stdio.h>

int main(){
  int i;

  for(i = 5; i < 17; i += 2){
    if(i == 8){
      break;
    }
    printf("i=%d\n", i);
  }

  return 0;
}
