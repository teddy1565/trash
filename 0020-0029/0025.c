#include<stdio.h>

int main(){
  /*不斷輸入一個二進制數值(只包含0 and 1)輸入為-1即停止 印出此二進位的相對十進制數值
  110110 = 1*2^5+1*2^4+0*2^3+1*2^2+1*2^1+0*2^0*/
  while(1){
    int counter_1=0,keyin=0;//初始化計數器以及鍵盤輸入後數值存放之變數
    printf("please enter number:");//提示使用者輸入
    scanf("%d",&keyin);//輸入數值並存在keyin

    if(keyin==-1){//若輸入-1則退出程式
      break;//退出while迴圈
    }else{//若開始輸入數值
        int num=keyin;//備份keyin之數值
        while(keyin!=0){//計算輸入多少位之數字 假設輸入三位數字
          keyin/=10;//除以十減少位數
          counter_1++;//計數器數值增加計算位數
        }
        printf("%d=",num); //[110110 =] 顯示最終結果所需之字串
        for(int i=counter_1-1;i>=0;i--){//做counter_1次 若輸入110110則做6次((根據輸入位數變化
          int counter_2=1;//初始化計算變化量
          for(int j=0;j<i;j++){
            counter_2*=10;//每多一位數 則乘以10
          }
          printf("%d*2^%d",num/counter_2,i);
          num=num%counter_2;
          i==0?printf("\n"):printf("+");
          /*三元運算子？： 可等價於
            if(i==0){
              printf("\n");
            }else{
              printf("+");
            }
          */
        }
    }
  }
  return 0;
}