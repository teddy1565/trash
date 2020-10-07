#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
  char st[100];
  memset(st,'\0',100);
  st[0]='5';
  st[1]='6';
  printf("%d\n",atoi(&st[0]));
  return atoi(&st[0]);
}