#include<stdio.h>
#include<math.h>
int main(){
  int keyin=0;
  while(1){
    printf("please enter number:");
    scanf("%d",&keyin);
    if(keyin==-1){
      break;
    }else{
      for(int i=1;i<=keyin;i++){
        int num = i,counter_1=0,counter_2=1,sum=0;
        while(num!=0){
          num/=10;
          counter_1++;
        }
        num = i;
        for(int j=counter_1-1;j>=0;j--){
          counter_2=1;
          for(int k=0;k<j;k++){
            counter_2*=10;
          }
          sum+=(int)pow(num/counter_2,counter_1);
          num%=counter_2;
        }
        sum==i?printf("%d\n",sum):printf("");
      }
    }
  }
  return 0;
}