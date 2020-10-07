#include<stdio.h>
#include<time.h>

int main(){
  int a = time(NULL);
  for(int i=0;i<100;){
    if(a!=time(NULL)){
      printf("%ld\n",time(NULL));
      i++;
      a = time(NULL);
    }
  }
  //printf(time(null))
  return 0;
}