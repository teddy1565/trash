#include<stdio.h>

int main(int argc,char *argv[]){
  int a=argv[1],i,b;
  while(a!=-1){
    b=0;
    if(a==-1){
      break;
    }else{
      for(i=2;i<a;i++){
        if((a%i)==0){
          b++;
          break;
        }
      }
      if(b==0)break;
    }
  }
  return a;
}