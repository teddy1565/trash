#include<stdio.h>
int side(int a,int b,int c);
int main(){
  while(1){
    int keyin;
    printf("please enter number: ");
    scanf("%d",&keyin);
    if(keyin==-1){
      break;
    }else{
      int i,j;
      for(i=1,j=keyin;i<=keyin;i++,j--){
        side(keyin-(keyin-i),keyin-i,1);
        side(j,keyin-j,1);
        side(keyin-j,j,0);
        side(keyin-i,keyin-(keyin-i),0);
        printf("\n");
      }
    }
  }
  return 0;
}
int side(int a,int b,int c){
  int i;
  for(i=0;i<a;i++){
      c==1?printf("*"):printf(" ");
  }
  for(i=0;i<b;i++){
      c==1?printf(" "):printf("*");
  }
  printf("\t");
  return 0;
}