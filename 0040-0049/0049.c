#include<stdio.h>

int max(int a,int b,int c){
  if(c==0){
    if(a>b)return a;
    return b;
  }else{
    int arr[3]={a,b,c},max=arr[0];
    for(int i=0;i<3;i++){
      if(arr[i]>max)max = arr[i];
    }
    return max;
  }
  return 0;
}
int main(){
  while(1){
    printf("please enter number: ");
    char str[100];
    fgets(str,100,stdin);
    int arr[3]={0,0,0};
    for(int i=0,j=0;str[i+1]!='\0';i++){
      if(str[i]=='-'&&str[i+1]=='1'){
        return 0;
      }
      if(str[i]==' '){
        j++;
        continue;
      }
      arr[j]=arr[j]*10+str[i]-'0';
    }
    printf("\nmax:%d\n",max(arr[0],arr[1],arr[2]));
  }
  return 0;
}