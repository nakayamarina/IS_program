//解答 (1)0 (2)5 (3)3 (4)6 (5)7 (6)2 (7)2 (8)3 (9)0 (10)3 (11)4

#include<stdio.h>
#include<string.h>

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

  for(num = 0; num < 32; num++){
    ret = InputPhones(&phones[num]);
    if(ret != 0){
      break;
    }
  }

  printPhones(num, phones);

  return 0;
}

int InputPhones(struct PhonesTag *pPhone){
  printf("Input your name:");
  scanf(" %[^\n]", pPhone->name);
  if(strcmp(pPhone->name, "end")==0){
    return -1;
  }

  printf("Input your phone number:");
  scanf(" %[^\n]", pPhone->tel);

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
