#include<stdio.h>
#include<stdlib.h>

typedef char string[1000];

int main(){
  string num;
  num[0]='+';
  printf("%d",atoi(num));
  return 0;
}