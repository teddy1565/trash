#include<stdio.h>
int q1(int n){
  int sum=0;
  while(n>0){
    sum+=(n*n+10*n);n--;
  }
  return sum;
}
int q2(int n){
  int sum=0;
  while(n>0)sum+=n--;
  return sum;
}
int q3(){
  int i,sum=0;
  for(i=1;i<=500;i++){
    sum+=(i*(1001-i));
  }
  return sum*2;
}
int q4(int n){
  int sum=1,i;
  for(i=1;i<=n;i+=2){
    sum*=(i*i+3*i+1);
  }
  return sum;
}
int main(){
  int n;
  scanf("%d",&n);
  printf("Q1:%d\nQ2:%d\nQ3:%d\nQ4:%d\n",q1(n),q2(n),q3(),q4(n));
  return 0;
}
