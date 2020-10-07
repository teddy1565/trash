#include<stdio.h>
//Would_you_be_my_Valentine_?
//87 111 117 108 100 95 121 111 117 95 98 101 95 109 121 95 86 97 108 101 110 116 105 110 101 95 63
//I_Love_you
//73 95 76 111 118 101 95 89 111 117
int main(){
  int shift[]={73,95,76,111,118,101,95,89,111,117};
  int change[]={87,111,117,108,100,95,121,111,117,95,98,101,95,109,121,95,86,97,108,101,110,116,105,110,101,95,63};
  for(int i=0;i<(sizeof(shift)/sizeof(shift[0]));i++){
      printf("%c",shift[i]);
  }
  printf("\n");
  for(int j=0;j<(sizeof(change)/sizeof(change[0]));j++){
      printf("%c",change[j]);
  }
  printf("\n");
  return 0;
}