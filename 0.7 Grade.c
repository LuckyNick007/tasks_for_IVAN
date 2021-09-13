#include <stdio.h>

int main(){
  int grade, max;
  double res;

  scanf("%d", &grade);
  scanf("%d", &max);

  res =  grade / ((double)max / 100);

  if (90 < res & res < 100){
    printf("A\n"); return 0;
  } else if (80 < res & res < 89){
    printf("B\n"); return 0;
  } else if (70 < res & res < 79){
    printf("C\n"); return 0;
  } else if (60 < res & res < 69){
    printf("D\n"); return 0;
  } else {
    printf("F\n"); return 0;
  }
}
