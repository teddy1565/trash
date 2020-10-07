#include<stdio.h>
#include<stdlib.h>

typedef char *string;

char *st_T(char *str){
  char strr[1000];
  for(int i=0;str[i]!='\0'&&str[i]!='\n';i++){
    strr[i] = str[i];
  }
  return strr;
}
int main(){
  char str[100];
  char strrr[1000];
  scnaf("%s",str);
  strr = st_T(str);
  printf("%s\n",strr);
  return 0;
}