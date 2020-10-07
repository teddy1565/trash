#include<stdio.h>

int f(int num,int s,int i,int n)//f(輸入的數字,起點,遞增值,每七個換行計數器){
  if(num==-1)return 0;//如果輸入-1則return 0表示不執行
  s==0?s=s:printf("%d ",s);//s是否為0 若為0則s=s若非0則顯示s
  //起點若是0則不顯示0 才能做到 1 1 2 3 5
  //否則若起點為0會顯示0 1 1 2 3 5
  if(n==6)printf("\n");//n若等於6則顯示換行字元
  n==6?n=0:n++;//n若為6則n歸零：若不是6則n=n+1
  return s+i>num?s:f(num,s+i,s,n);
  //若s+i大於輸入的數值則直接回傳s
  //若s+i不大於輸入的數值則回傳f函數的回傳值
}
int main(){
  return 0;
}