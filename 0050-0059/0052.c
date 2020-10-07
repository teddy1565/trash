#include<stdio.h>

int func(int num){
  return num>10?num:func(num+1);
}
int func2(int num){
  for(int i=num;i<=num;i++){

  };
  return  num;
}
int main(){
  if(func(1)==func2(1))printf("1");
  return 0;
}