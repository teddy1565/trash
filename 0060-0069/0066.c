#include<stdio.h>
#include<time.h>
#include<math.h>
#include<stdlib.h>
int Rand(s,max){
  srand(time(NULL)*1000);
  return (rand()%max)+s;
}
int main(){
  while(1){
    int keyin=0;
    scanf("%d",&keyin);
    if(keyin==-1)break;
    int result[13];
    for(int i=0;i<13;i++){
      result[i]=0;
    }
    for(int i=0;i<keyin;i++){
      int d1=Rand(1,6);
      int d2=Rand(1,6);
      result[(d1+d2)]++;
    }
    for(int i=1,max=0;i<=keyin;i++){
      printf("點數組合%d 出現機率為%lf\n",i,result[i]/keyin);
      if(result[i]>max)max = i;
      if(i==keyin-1)printf("最多點數為%d其機率為%lf\n",max,result[i]/keyin);
    }
  }
  return 0;
}