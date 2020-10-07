#include<stdio.h>
const int Length=10000;
int main(){
  char str[Length];
  int a[Length];
  for(int i=0;i<Length;i++){
    a[i]=0;
    str[i]='0';
  }
  fgets(str,Length,stdin);
  for(int i=0,j=0;str[i]!='\0';i++){
    if(str[i]==' '||str[i+1]=='\0'){
      j++;
    }else{
      a[j]=a[j]*10+(str[i]-'0');
    }
  }
  for(int i=0;i<Length;i++){
    str[i]='0';
  }
  int k=0;
  fgets(str,Length,stdin);
  for(int i=0,j=0,num=0;str[i]!='\0';i++){
    if(str[i]==' '||str[i+1]=='\0'){
        for(int counter=0;counter<Length;counter++){
          if(a[counter]==num&&num!=0){
            printf("%d ",num);
            k++;
          }
        }
        j++;
        num=0;
    }else{
        num=num*10+(str[i]-'0');
    }
  }
  if(k==0)printf("null");
  printf("\n");
  return 0;
}