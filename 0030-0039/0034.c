#include<stdio.h>
const int Length=10000;
int main(){
  char str[Length];
  int start=0,end=0;
  for(int i=0;i<Length;i++){
    str[i]=' ';
  }
  fgets(str,10000,stdin);
  scanf("%d %d",&start,&end);
  printf("%d || %d\n",start,end);
  for(int i=0;i<Length;i++){
    if(str[i]=='\0'){
      break;
    }else{
      if(i>=start&&i<(start+end)){
        printf("%c",str[i]);
      }
    }
  }
  printf("\n");
  for(int i=0;i<Length;i++){
    if(str[i]=='\0'){
      break;
    }else{
      if(i<start||i>(start+end)-1){
        printf("%c",str[i]);
      }
    }
  }
  printf("\n");
  return 0;
}