#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int Prand(int N){
  srand(time(NULL));
  return (rand()%N)+1;
}
int guess(int num,int N,int C){
  if(num==-1)return -1;
  if(num<N){
    printf("too small\nguess a num:");
    scanf("%d",&num);
    return guess(num,N,C+1);
  }else if(num>N){
    printf("too big\nguess a num:");
    scanf("%d",&num);
    return guess(num,N,C+1);
  }else if(num==N){
    printf("guess it\n");
  }
  return C;
}
double HW1(double N,int M,int target,int c){
  double a,b;
  if(N==-1||M==-1)return -2;
  if(c==1){
    printf("please set N:");
    scanf("%lf",&a);
    N=a;
  }
  printf("please enter M:");
  scanf("%lf",&b);
  N+=b;
  int dice=Prand(6)+Prand(6);
  printf("turn:%d\n",c);
  if(c==1){
    if(dice==7||dice==11){
      return N*1.5;
    }else if(dice==2||dice==3||dice==12){
      return 0;
    }else{
      return HW1(N,b,dice,c+1);
    }
  }
  if(dice==target){
    return N*1.5;
  }else if(dice == 7){
    return 0;
  }else{
    return HW1(N,b,dice,c+1);
  }
  return -1;
};
int main(){
  while(1){
    printf("please chose function:\n");
    printf("1.\tHW1\n2.\tHW2\n3.\texit\n");
    int chose;
    scanf("%d",&chose);
    if(chose==3)break;
    if(chose==1){
      while(1){
        printf("new game!\n");
        double result = HW1(0,0,0,1);
        if(result==0){
          printf("lose\n");
        }else if(result!=-2&&result!=-1){
          printf("win\n");
        }else if(result==-1){
          printf("error\n");
        }else if(result==-2){
          break;
        }
      }
    }else if(chose==2){
      while(1){
        int NN;
        printf("guess a num:");
        scanf("%d",&NN);
        if(NN==-1)break;
        int CA=guess(NN,Prand(1000),1);
        if(CA==-1)break;
        printf("guess %d of times\n",CA);
      }
    }
  }
  return 0;
}