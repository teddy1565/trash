#include<stdio.h>
int main(){
  int x=0;
  for(int i=1;i<=6;i++){
    for(int j=i;j<=6;j++){
      printf("%d",x++);
    }
  }
  return 0;
}