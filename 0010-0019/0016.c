#include<stdio.h>
int main(){
    int input,i;
    int num[4],output;
    scanf("%d",&input);
    //加密開始
    num[0] = input/1000;
    num[1] = (input/100)%10;
    num[2] = (input/10)%100%10;
    num[3] = input%1000%100%10;
    for(i=0;i<4;i++){
    	num[i] = (num[i]+7)%10;
    }
    //交換位數開始
    num[0] = num[0]^num[2];
    num[2] = num[0]^num[2];
    num[0] = num[0]^num[2];
    num[1] = num[1]^num[3];
    num[3] = num[1]^num[3];
    num[1] = num[1]^num[3];
    //交換位數結束
    output = num[0]*1000+num[1]*100+num[2]*10+num[3];
    printf("encode:%d\n",output);
    //加密結束
    //解密開始
    num[0] = output/1000;
	num[1] = (output/100)%10;
	num[2] = (output/10)%100%10;
	num[3] = output%1000%100%10;
    //交換位數開始
	num[0] = num[0]^num[2];
	num[2] = num[0]^num[2];
	num[0] = num[0]^num[2];
	num[1] = num[1]^num[3];
	num[3] = num[1]^num[3];
	num[1] = num[1]^num[3];
    //交換位數結束
	for(i=0;i<4;i++){
	   num[i] = (num[i]+3)%10;//解密算法
	}
	output = num[0]*1000+num[1]*100+num[2]*10+num[3];
	printf("decode:%d\n",output);
    return 0;
}