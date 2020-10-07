#include<stdio.h>
#include<stdlib.h>

int calcu(int a,int b){
  return a*b;
}
int main(){
  int a,b;
  scanf("%d%d",&a,&b);
  printf("%d\n",calcu(a,b));
  return 0;
}