#include<stdio.h>

int main(){
  while(1){
    int a1,k,m,s,t,c,i,po;
    printf("please enter number:");
    scanf("%d",&a1);
    if(a1==-1){
      break;
    }else{
      printf("%d-->",a1);
      m=1;
      s=0;
      while(a1!=0){
        k=a1%10;
        printf("%d",k);
        a1/=10;
        s+=k*m;
        m*=2;
      }
      printf("十進制數值為：%d\n",s);
    }
  }
  return 0;
}