#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
  char cmd[1000];
  strcpy(cmd,"./b.out ");
  while(1){
    int keyin,i=0;
    printf("please enter number");
    scanf("%d",keyin);
    if(keyin==-1){
      break;
    }else{
      for(i=2;i<=keyin;i++){
        char str[100];
        int j;
       
        strcat(cmd,);
        system(cmd);
      }
    }
  }
  return 0;
}