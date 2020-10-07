#include<stdio.h>

int main(){
  int a,sum=0;
  scanf("%d",&a);
  while(a>0){
    sum+=a--;
  }
  printf("result:%d\n",sum);
  return 0;
}
