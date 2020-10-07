#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int Get_ms(){
  int a = time(NULL);
  int count = 0;
  while(a==time(NULL)){
    count++;
  }
  //printf("%d",count);
  return count/1000;
}
int delay(int ms){
  printf("a");
  int i=0;
  while(i<ms){
    i=i+1;
  }
  return i;
}
int main(){
  int ms = Get_ms();
  printf("f");
  for(int i=0;i<5000;i++){
    delay(ms);
  }
  printf("a");
  return 0;
}