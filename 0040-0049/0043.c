#include<stdio.h>

int main(){
  while(1){
    int keyin;
    printf("please enter number:");
    scanf("%d",&keyin);
    if(keyin==-1){
      break;
    }else{
      int i;
      for(i=2;i<=keyin;i++){
        if(i==2){
          printf("%d ",i);
        }else{
          int check=0,j;
          for(j=2;j<i;j++){
            if(i%j==0){
              check=1;
              break;
            }
          }
          if(check==0)printf("%d ",i);
        }
      }
    }
    printf("\n");
  }
  return 0;
}