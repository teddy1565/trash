#include<stdio.h>
#include<math.h>
int isPerfect(int num){//完美數
  int i,j,k=0;
  for(i=1;i<num;i++){
    if(num%i==0){
      k+=i;
    }
  }
  if(k==num&&i!=1){
    return num;
  }else{
    return 0;
  }
}
double abso(double a){//絕對值
  if(a>=0){
    return a;
  }else if(a<0){
    return -a;
  }
  return a;
}
int quadraticEquation(int a,int b,int c){//求根
  double x1=(-b+sqrt(abso(((b*b)-(4*a*c)))))/(2*a);
  double x2=(-b-sqrt(abso(((b*b)-(4*a*c)))))/(2*a);
  int judgment = (b*b)-(4*a*c);
  printf("x1=%lf x2=%lf judg=%d\n",x1,x2,judgment);
  return 0;
}
int primeParse(int num){//質因數分解
  if(num==-1){
    return 0;
  }
  printf("%d=",num);
  int i=2;
  while(num>0&&i<=num){
    if(num%i==0){
      printf("%d",i);
      (num/i)==1?printf(""):printf("*");
      num/=i;
    }else{
      i++;
    }
  }
  printf("\n");
  return 0;
}
int main(){
  int input;
  scanf("%d",&input);
  primeParse(input);
  return 0;
}