#include<stdio.h>
int main(){
    int max=0,midx=0,midy=0,min=0,set=0;
  while(1){
    int keyin=0;
    printf("please enter number:");
    scanf("%d",&keyin);
    if(set==0){
      max=keyin;midx=keyin;midy=keyin,min=keyin;
      set++;
    }else if(keyin==-1){
      printf("end\n");
      break;
    }else{
      if(keyin>=max){
        midx = max;
        max = keyin;
      }else if(keyin>=midx){
        midx = keyin;
      }else if(keyin<=min){
        if(midx==max)midx=midy;
        midy = min;
        min = keyin;
      }else if(keyin<=midy){
        if(midx==max)midx=midy;
        midy = keyin;
      }
    }
    printf("max=%d,midx=%d,midy=%d,min=%d\n",max,midx,midy,min);
  }
  return 0;
}