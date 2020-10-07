#include<stdio.h>

int main(){
  for(int i=1;i<=100;i++){
    if(i%4==0){i%20==0?(printf("%d\n",i)):(printf("%d ",i));}
  }
  return 0;
}