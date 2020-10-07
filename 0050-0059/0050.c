#include<stdio.h>
int Prime(int num){
  if(num==-1)return 0;
  int s=0;
  if(num>=3){
    printf("2\t3\t");
    s+=2;
  }else if(num>=2){
    printf("2 ");
    s++;
  }
  for(int i=5;i<=num;i+=2){
    for(int j=3;j<=i;j+=2){
      if(i%j==0&&j!=i){break;}
      if(j==i){
        printf("%d\t",i);
        s++;
        if(s==7){s=0;printf("\n");}
      }
    }
  }
  return 0;
}
int checkPrime(int num){
  if(num==2||num==3)return 1;
  if(num%2==0)return 0;
  for(int i=5;i<=num;i+=2){
    if(num%i==0){
      return i==num?1:0;
    }
  }
  return 1;
}
int GCD(int n1,int n2){
  if(n1==-1||n2==-1)return 0;
  int GCD=0;
  if(checkPrime(n1)==1||checkPrime(n2)==1){
    GCD = 1;
  }else{
    for(int i=2;i<=(n1>n2?n2:n1);i++){
      if(n1%i==0&&n2%i==0){
        GCD = i;
      }
    }
  }
  return GCD;
}
int f(int num,int s,int i,int n){
  if(num==-1)return 0;
  s==0?s=s:printf("%d ",s);
  if(n==6)printf("\n");
  n==6?n=0:n++;
  return s+i>num?s:f(num,s+i,s,n);
}
int main(){
  int keyin=0;
  while(keyin!=-1){
    printf("please chose function\n1:Prime\n2:GCD&LCM\n3:Fibon\ninput:");
    scanf("%d",&keyin);
    if(keyin==-1)break;
    if(keyin==1){
      int pr=0;
      while(pr!=-1){
        printf("please enter number: ");
        scanf("%d",&pr);
        if(pr==-1)break;
        Prime(pr);
        printf("\n");
      }
    }else if(keyin==2){
      int n1=0,n2=0;
      while(n1!=-1&&n2!=-1){
        printf("please enter number1 and number2: ");
        scanf("%d%d",&n1,&n2);
        if(n1==-1||n2==-1)break;
        n1=n1>n2?n1:n2-n1;
        n2=n1>n2?n2:n2-n1;
        n1=n1>n2?n1:n1+n2;
        printf("GCD=%d\tLCM=%d\n",GCD(n1,n2),n1%n2==0?n1:(n1*n2)/GCD(n1,n2));
      }
    }else if(keyin==3){
      int num=0;
      while(num!=-1){
        printf("please enter number: ");
        scanf("%d",&num);
        if(num==-1)break;
        f(num,0,1,0);
        printf("\n");
      }
    }
  }
  return 0;
}