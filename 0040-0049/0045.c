#include<stdio.h>

int main(){
  int a1,k,m,s,t,c,i,po;
  printf("輸入一數值-->");
  scanf("%d",&a1);
  while(a1!=-1){
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
    printf("其相對的十進位為%d\n",s);
    printf("輸入一數值-->");
    scanf("%d",&a1);
  }
  return 0;
}