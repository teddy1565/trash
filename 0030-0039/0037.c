#include<stdio.h>
const int Lenght = 10000;
int main(){
  char str[Lenght];
  int a[Lenght];
  for(int i=0;i<Lenght;i++){
    str[i] = ' ';
    a[i]=0;
  }
  fgets(str,Lenght,stdin);
  for(int i=0;i<Lenght;i++){
    i%5==0?printf("%c\n",str[i]):printf("%c",str[i]);
    if(str[i]=='\0'){
      printf("i am here at :%d\ninfront me:%d\nand this element is %c",i,i-1,str[i-2]);
      break;
    }
  }
  return 0;
}