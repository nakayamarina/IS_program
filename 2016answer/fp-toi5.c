#include<stdio.h>
#include<stdlib.h>

double getMax(double *ary, int size);

int main(int argc, char *argv[]){
  int i, num;
  double array[20];
  double max;

  if(argc != 2){
    printf("Usage:%s number\n", argv[0]);
    return 0;
  }

  num = atoi(argv[1]);
  for(i=0; i<num; i++){
    printf("Input number[%d]:", i);
    scanf("%lf", &array[i]);
  }

  max = getMax(array, num);
  printf("max = %.2f\n", max);
  return 0;
}

double getMax(double *ary, int size){
  double max = *ary;
  int i;
  for(i = 0; i<size; i++, ary++){
    printf("%p\n", ary);
    if(max < *ary){
      max = *ary;
    }
  }

  return max;
}
