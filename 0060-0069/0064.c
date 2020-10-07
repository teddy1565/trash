#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int Prand(){
  srand(time(NULL));
  int r=(rand()%6)+1;
  return r;
}
double HW1(double N,double M,int c1,double target){
  double total=Prand()+Prand();
  if(target!=13)printf("target:%lf\n",target);
  printf("total:%lf\n",total);
  if(c1==1){
    if(total==2||total==3||total==12){
      return 0;
    }else if(total==7||total==11){
      return N*1.5;
    }
    return total;
  }else if(total==7){
    return 0;
  }else if(total==target){
    return N*1.5;
  }else if(total!=target){
    return N;
  }
  return 0;
}
int main(){
while(1){
  printf("please chose:\n");
  printf("1.\tHW1\n");
  printf("2.\tHW2\n");
  printf("3.\texit\n");
  int chose;
  scanf("%d",&chose);
  if(chose==3)break;
  if(chose==1){
    double N=0,M=0,target=13;
    int I=1;
    while(1){
      if(I==1){
        printf("please enter N:");
        scanf("%lf",&N);
      }
      printf("please enter M:");
      scanf("%lf",&M);
      if(N==-1||M==-1)break;
      N+=M;
      printf("gold:%lf\n",N);
      double result;
      result = HW1(N,M,I,target);
      if(I==1){
        if(result!=(N*1.5)&&result!=0){
          target = result;
        }else if(result==(N*1.5)){
          printf("win\n");
          N=result;
          printf("gold:%lf\n",N);
          N=0;M=0,I=1,target=13;
        }
        I++;
      }
      if(result==0&&I!=1){
        printf("loser\n");
        N=0;
        I=1;
        M=0;
        target=13;
      }else if(result==(N*1.5)){
        printf("win\n");
        N = result;
        M=0;
        I++;
      }else if(result==N){
        printf("no win no lose\n");
        M=0;
        I++;
      }
    }
  }
}
  return 0;
}