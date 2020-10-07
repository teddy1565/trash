#include<stdlib.h>
#include<stdio.h>

typedef char *String;

char *T01(char *str){
  int counter=0;
  while(str[counter]!='\0'&&str[counter]!='\n')counter++;
  String cpy_str = malloc((counter+1)*sizeof(char));
  for(int i=0;i<counter;i++){
    cpy_str[i]=str[i];
  }
  return cpy_str;
}
int main(){
  char s[1000];
  scanf("%s",s);
  char *str = T01(s);
  printf("%s\n",str);
  return 0;
}